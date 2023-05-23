
package vetorparimpar;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama/MatheusBrando
 */
public class VetorParImpar {

    public static void main(String[] args) {

        int[] evenNumbers = new int[5];
        int[] oddNumbers = new int[5];
        int evenCounter = 0;
        int oddCounter = 0;
        int number;

        Scanner scan = new Scanner(System.in);

        System.out.println("Digite 15 valores inteiros do vetor: ");
        for (int i = 0; i < 15; i++) {

            System.out.print(i + "º - ");
            number = scan.nextInt();

            if (number % 2 == 0) {
                // evenNumbers[]
            }

        }

        scan.close();

    }

}
