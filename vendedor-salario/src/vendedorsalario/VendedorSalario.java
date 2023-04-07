
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
        
        System.out.print("Digite o nome do funcion�rio: ");
        nome = scan.next();
        
        System.out.print("Digite o sal�rio do funcion�rio: R$");
        salario = scan.nextDouble();
        
        System.out.print("Digite o valor de vendas do funcion�rio: R$");
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
        
        System.out.println("Sal�rio final: R$" + salarioFinal);
        
        scan.close();
        
    }
    
}
