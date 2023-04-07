
package numeros.iguais;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class NumerosIguais {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        System.out.print("Digite o primeiro número: ");
        int numero1 = scan.nextInt();
        
        System.out.print("Digite o segundo número: ");
        int numero2 = scan.nextInt();
        
        scan.close();
        
        if (numero1 > numero2) {
            System.out.println(numero1 + " é maior que " + numero2);
        } else if (numero2 > numero1) {
            System.out.println(numero2 + " é maior que " + numero1);
        } else {
            System.out.println("Os número são iguais");
        }
        
    }
    
}
