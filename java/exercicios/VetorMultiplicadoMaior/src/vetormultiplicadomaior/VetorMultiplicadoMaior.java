
package vetormultiplicadomaior;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class VetorMultiplicadoMaior {

    public static void main(String[] args) {
        
        int[] numbers = new int[10];        
        int largestNumber = 0;
        int[] numbersMultiplied = new int[10];
        
        Scanner scan = new Scanner(System.in);
        
        
        System.out.println("Entre com os 10 valores inteiros do vetor: ");
        for (int i = 0; i < numbers.length; i++) {
            System.out.print((i + 1) + " - ");
            numbers[i] = scan.nextInt();
            
            if (numbers[i] > largestNumber || (i == 0)) {
                largestNumber = numbers[i];
            }
        }      
        
        for (int i = 0; i < numbersMultiplied.length; i++) {
            numbersMultiplied[i] = numbers[i] * largestNumber;
        }
        
        System.out.println("\nMaior valor: " + largestNumber);
        System.out.println("Vetor multiplicado pelo maior valor: ");
        for (int i = 0; i < numbersMultiplied.length; i++) {
            System.out.print(numbersMultiplied[i] + " ");
        }
        
    }
    
}
