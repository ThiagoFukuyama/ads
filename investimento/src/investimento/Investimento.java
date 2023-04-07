
package investimento;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class Investimento {

    public static void main(String[] args) {
        
        int tipo;
        double valor;
        double rendimento = 0;
        double valorCorrigido;
        
        Scanner scan = new Scanner(System.in);
        
        System.out.printf("%s%n%s%n%s%n", 
                        "Escolha o tipo de investimento: ",
                        "1- Poupança (3%)",
                        "2- Fundos de Renda Fixa (4%)");
        
        tipo = scan.nextInt();
        
        System.out.print("Insira o valor do investimento: R$");
        valor = scan.nextDouble();
        
        if (tipo == 1) {
            rendimento = valor * 0.03;
        } else if (tipo == 2) {
            rendimento = valor * 0.04;
        }
        
        valorCorrigido = valor + rendimento;
        
        System.out.println("Rendimento: " + rendimento);
        System.out.println("Valor final: " + valorCorrigido);
        
        scan.close();
        
    }
    
}
