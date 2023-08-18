
package salarioaumento;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class SalarioAumento {

    public static void main(String[] args) {
        
        double salario;
        double aumento = 0;
        double salarioFinal;
        
        Scanner scan = new Scanner(System.in);  
        
        System.out.print("Digite o salário atual: R$");
        salario = scan.nextDouble();
        
        if (salario <= 2000) {
            aumento = salario * 0.1;
        }
        
        if ((salario > 2000) && (salario <= 3000)) {
            aumento = salario * 0.05;
        }
        
        salarioFinal = salario + aumento;
        
        System.out.println("Valor do aumento: R$" + aumento);
        System.out.println("Novo salário: R$" + salarioFinal);
        
        scan.close();
        
    }
    
}
