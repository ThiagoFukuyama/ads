
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
        System.out.println("Capacidade máxima: " + MAX_CAPACITY);
        System.out.println("==============\n");
        
        
        /*
         *
         *  ENTRADA DO NÚMERO DE ANDARES
         *
         */
        do {
            System.out.println("Digite o número de andares: ");
            numFloors = scan.nextInt();
            
            if (numFloors <= 0) {
                System.out.println("(!) Valor inválido. \n");
            }        
        } while (numFloors <= 0);
        
        
        /*
         *
         *  ENTRADA PRIMEIRO ANDAR
         *
         */
        prevNumPeople = numPeople;
        do {
            if (numPeople > MAX_CAPACITY) {
                numPeople = prevNumPeople;
            }
            
            System.out.println("----- 1º ANDAR -----");
            
            do {
                System.out.println("Entraram: ");
                numPeopleIn = scan.nextInt();
                if (numPeopleIn < 0) {
                    System.out.println("(!) Valor inválido. Digite novamente.");
                }
            } while (numPeopleIn < 0);

            numPeople += numPeopleIn;
            
            if (numPeople > MAX_CAPACITY) {
                System.out.println("(!) Excesso de passageiros. Deve(m) sair " + (numPeople - MAX_CAPACITY) + " pessoa(s). \n");
            }   
        } while (numPeople > MAX_CAPACITY);   
        
        
        /*
         *
         *  ENTRADA RESTO DOS ANDARES
         *
         */
        for (int i = 2; i <= numFloors; i++) {

            prevNumPeople = numPeople;
            do {
                if ((numPeople > MAX_CAPACITY) || (numPeople < MIN_CAPACITY)) {
                    numPeople = prevNumPeople;
                }
                
                System.out.println("----- " + i + "º ANDAR -----");
                
                System.out.println("Pessoas no momento: " + numPeople);
                
                do {
                    System.out.println("Entraram: ");
                    numPeopleIn = scan.nextInt();
                    if (numPeopleIn < 0) {
                        System.out.println("(!) Valor inválido. Digite novamente.");
                    }
                } while (numPeopleIn < 0);
                
                do {
                    System.out.println("Saíram: ");
                    numPeopleOut = scan.nextInt();
                    if (numPeopleOut < 0) {
                        System.out.println("(!) Valor inválido. Digite novamente.");
                    }
                } while (numPeopleOut < 0);
                
                numPeople += numPeopleIn;
                numPeople -= numPeopleOut;
                
                if (numPeople > MAX_CAPACITY) {
                    System.out.println("(!) Excesso de passageiros. Deve(m) sair " + (numPeople - MAX_CAPACITY) + " pessoa(s). \n");
                }
                
                if (numPeople < MIN_CAPACITY) {
                    System.out.println("(!) O número de pessoas dentro não pode ficar negativo. \n");
                }
            } while ((numPeople > MAX_CAPACITY) || (numPeople < MIN_CAPACITY));
                        
        }
        
        remainingPeople = numPeople;
        System.out.println("Pessoas que ficaram no final: " + remainingPeople);
          
    }
    
}
