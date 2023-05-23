
package bubblesort;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class Bubblesort {

    public static void main(String[] args) {
        
        int[] numbers = new int[5];
        
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Digite os valores das 5 posições do vetor:");
        for (int i = 0; i < numbers.length; i++) {
            System.out.print(i + " - ");
            numbers[i] = scan.nextInt();
        }
        
        bubbleSort(numbers);
        
        System.out.println("\nVetor organizado: ");
        for (int i = 0; i < numbers.length; i++) {
            System.out.println(numbers[i] + " ");
        }
        
    }
    
    public static int[] bubbleSort(int[] vector) {
        int aux;
        boolean isAlreadySorted;
        
        for (int i = 0; i < vector.length; i++) {
            
            isAlreadySorted = true;
            
            for (int j = 0; j < (vector.length - i - 1); j++) {
                
               if (vector[j] > vector[j+1]) {
                   aux = vector[j];
                   vector[j] = vector[j+1];
                   vector[j+1] = aux;
                   
                   isAlreadySorted = false;
               }
                
            }
            
            if (isAlreadySorted) break;
            
        }
        
        return vector;
    }
    
}
