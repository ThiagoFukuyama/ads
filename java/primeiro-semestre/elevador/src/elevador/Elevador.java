
package elevador;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class Elevador {

    public static void main(String[] args) {

        final int MAX_CAPACITY = 15;
        final int MIN_CAPACITY = 0;
        int numFloors;

        int numPeople = 0;
        int prevNumPeople;
        int numPeopleIn;
        int numPeopleOut;
        int remainingPeople;

        Scanner scan = new Scanner(System.in);

        System.out.println("\n==============");
        System.out.println("ELEVADOR");
        System.out.println("--------------");
        System.out.println("Capacidade m�xima: " + MAX_CAPACITY);
        System.out.println("==============\n");

        /*
         *
         * ENTRADA DO N�MERO DE ANDARES
         *
         */
        do {
            System.out.println("Digite o n�mero de andares: ");
            numFloors = scan.nextInt();

            if (numFloors <= 1) {
                System.out.println("(!) Valor inv�lido. \n");
            }
        } while (numFloors <= 1);

        /*
         *
         * ENTRADA DOS PASSAGEIROS EM CADA ANDAR
         *
         */
        for (int floor = 1; floor <= numFloors; floor++) {
            prevNumPeople = numPeople;

            System.out.println("----- " + floor + "� ANDAR -----");

            System.out.println("Pessoas no momento: " + numPeople);

            do {
                System.out.println("Entraram: ");
                numPeopleIn = scan.nextInt();
                if (numPeopleIn < 0) {
                    System.out.println("(!) Valor inv�lido. Digite novamente.");
                }
            } while (numPeopleIn < 0);
            numPeople += numPeopleIn;

            if (floor > 1) {
                do {
                    System.out.println("Sa�ram: ");
                    numPeopleOut = scan.nextInt();
                    if (numPeopleOut < 0) {
                        System.out.println("(!) Valor inv�lido. Digite novamente.");
                    }
                } while (numPeopleOut < 0);
                numPeople -= numPeopleOut;
            }

            if (numPeople > MAX_CAPACITY) {
                System.out.println(
                        "(!) Excesso de passageiros. Deve(m) sair " + (numPeople - MAX_CAPACITY) + " pessoa(s). \n");
            }

            if (numPeople < MIN_CAPACITY) {
                System.out.println("(!) O n�mero de pessoas dentro n�o pode ficar negativo. \n");
            }

            if ((numPeople > MAX_CAPACITY) || (numPeople < MIN_CAPACITY)) {
                numPeople = prevNumPeople;
                floor--; // Deixa subir n�o
            }
        }

        remainingPeople = numPeople;
        System.out.println("Pessoas que ficaram no final: " + remainingPeople);

        scan.close();

    }

}
