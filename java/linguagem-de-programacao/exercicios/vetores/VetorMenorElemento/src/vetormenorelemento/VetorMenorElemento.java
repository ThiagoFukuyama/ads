
package vetormenorelemento;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama/MatheusBrando
 */
public class VetorMenorElemento {

    public static void main(String[] args) {

        double[] numbers = new double[8];
        double smallestNumber = 0;
        double[] numbersSubtracted = new double[8];

        Scanner scan = new Scanner(System.in);

        System.out.println("Digite os 8 valores reais do vetor: ");
        for (int i = 0; i < numbers.length; i++) {
            System.out.print(i + " - ");
            numbers[i] = scan.nextDouble();

            if ((i == 0) || (numbers[i] < smallestNumber)) {
                smallestNumber = numbers[i];
            }
        }

        System.out.println("Menor valor: " + smallestNumber);

        for (int i = 0; i < numbers.length; i++) {
            numbersSubtracted[i] = (numbers[i] - smallestNumber);
        }

        System.out.println("Vetor subtraído pelo menor valor: ");
        for (int i = 0; i < numbers.length; i++) {
            System.out.println(numbersSubtracted[i]);
        }

        scan.close();

    }

}
