
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

        System.out.println("Digite os 15 valores inteiros do vetor: ");
        for (int i = 0; i < 15; i++) {

            System.out.print((i + 1) + "� - ");
            number = scan.nextInt();

            if (number % 2 == 0) {
                
                evenNumbers[evenCounter] = number;
                evenCounter++;
                if (evenCounter > 4) {
                    System.out.println("N�meros pares at� agora: ");
                    for (int j = 0; j < evenNumbers.length; j++) {
                        System.out.print(evenNumbers[j] + " ");
                    }
                    System.out.println(System.lineSeparator());
                    evenCounter = 0;
                }
                
            } else {
                
                oddNumbers[oddCounter] = number;
                oddCounter++;         
                if (oddCounter > 4) {
                    System.out.println("N�meros �mpares at� agora: ");    
                    for (int j = 0; j < oddNumbers.length; j++) {
                        System.out.print(oddNumbers[j] + " ");
                    }
                    System.out.println(System.lineSeparator());                    
                    oddCounter = 0;
                }
                
            }

        }
        
        System.out.println("Conte�do final dos pares: ");
        for (int i = 0; i < evenNumbers.length; i++) {
            System.out.print(evenNumbers[i] + " ");
        }
        
        System.out.println("\nConte�do final dos �mpares: ");
        for (int i = 0; i < oddNumbers.length; i++) {
            System.out.print(oddNumbers[i] + " ");
        }

        scan.close();

    }

}
