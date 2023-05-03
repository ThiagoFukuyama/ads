
package triangulo;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class Triangulo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        double lado1;
        double lado2;
        double lado3;
        double semiperimetro;
        double area;
        
        System.out.println("Insira o primeiro lado: ");
        lado1 = scan.nextDouble();
        
        System.out.println("Insira o segundo lado: ");
        lado2 = scan.nextDouble();
        
        System.out.println("Insira o terceiro lado: ");
        lado3 = scan.nextDouble();
        
        // Checando para ver se nenhum lado é 0
        if ((lado1 > 0) && (lado2 > 0) && (lado3 > 0)) {
            
            // Checando para ver se é um triângulo
            if ((lado1 < (lado2 + lado3)) && (lado2 < (lado1 + lado3)) && (lado3 < (lado1 + lado2))) {
                
                semiperimetro = (lado1 + lado2 + lado3) / 2.0;
                area = Math.sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));
                System.out.println("A área do triângulo é: " + area);
                
            // Se não for um triângulo    
            } else {
                
                System.out.println("Os três lados fornecidos não formam um triângulo");
                
            }
            
        // Se algum dos lados é 0    
        } else {
            
            System.out.println("Nenhum dos lados pode ter valor '0'");
            
        }
           
    }
    
}
