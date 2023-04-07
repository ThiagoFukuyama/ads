
package vendedorsalario;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class VendedorSalario {

    public static void main(String[] args) {
        
        String nome;
        double salario;
        double valorVendas = 0;
        double percentualVendas = 0;
        double salarioFinal;
        
        Scanner scan = new Scanner(System.in);
        
        System.out.print("Digite o nome do funcionário: ");
        nome = scan.next();
        
        System.out.print("Digite o salário do funcionário: R$");
        salario = scan.nextDouble();
        
        System.out.print("Digite o valor de vendas do funcionário: R$");
        valorVendas = scan.nextDouble();
        
        if (salario == 600) {
            percentualVendas = valorVendas * 0.05;
        }
        
        if (salario == 1000) {
            percentualVendas = valorVendas * 0.1;
        }   
        
        if (salario == 2000) {
            percentualVendas = valorVendas * 0.2;
        }
        
        salarioFinal = salario + percentualVendas;
        
        System.out.println("Salário final: R$" + salarioFinal);
        
        scan.close();
        
    }
    
}
