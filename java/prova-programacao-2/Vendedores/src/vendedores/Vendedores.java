
package vendedores;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class Vendedores {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        String nomes[] = { "Ivo", "Leia", "Susi", "Alan", "Ian", "Bia", "Gil", };
        double[] salariosBase = { 3000, 2200, 2400, 2000, 2500, 2600, 3500 };
        double[] salariosFinais = new double[salariosBase.length];
        double[] vendas = { 7000, 20000, 15000, 6000, 5000, 22000, 8000};
        char[] categorias = { 'b', 'e', 'e', 'b', 'b', 'e', 'b' };
        
        
        /**
         *
         * 1 - Exibindo os dados
         */
        System.out.printf("%-13s %-13s %-13s %-13s %n", 
                          "NOME", "SALÁRIO BASE", "VENDAS", "CATEGORIA");
        
        for (int i = 0; i < nomes.length; i++) {
            System.out.printf("%-13s R$%-13.2f R$%-13.2f %-13c %n", 
                              nomes[i], salariosBase[i], vendas[i], categorias[i]);
        }
        
        
        /**
         *
         * 2 - Calculando a média dos salários base 
         * dos vendedores externos
         */
        int quantVendedoresE = 0;
        double somaSalariosE = 0;
        double mediaSalariosE;
        
        for (int i = 0; i < salariosBase.length; i++) {
            
            if (categorias[i] == 'e') {
                somaSalariosE += salariosBase[i];
                quantVendedoresE++;
            }
            
        }
        
        mediaSalariosE = somaSalariosE / quantVendedoresE;
        System.out.printf("%nMédia de salário base dos vendedores externos: R$%.2f %n", mediaSalariosE);
        
        
        /**
         *
         * 3 - Calculando e exibindo o salário final de todos os vendedores
         */
        for (int i = 0; i < salariosFinais.length; i++) {

            if (categorias[i] == 'e') {
                salariosFinais[i] = salariosBase[i] + (vendas[i] * 0.2);
            } else {
                salariosFinais[i] = salariosBase[i] + (vendas[i] * 0.05);
            }
            
        }
        
        System.out.println("\nSalário final dos funcionários: \n");
        System.out.printf("%-13s %-13s %n", 
                          "NOME", "SALÁRIO FINAL");
        for (int i = 0; i < salariosFinais.length; i++) {
            
            System.out.printf("%-13s R$%-13.2f %n", 
                              nomes[i], salariosFinais[i]);
            
        }
        
        
        /**
         *
         * 4 - Calculando e exibindo o total de vendedores da 
         * categoria digitada
         */
        int quantCategoriaE = 0;
        int quantCategoriaB = 0;
        
        System.out.println("\nDigite o nome da categoria para pesquisar: ");
        char categoriaInput = scan.next().toLowerCase().charAt(0);
        
        for (int i = 0; i < categorias.length; i++) {

            if (categorias[i] == 'e') {
                quantCategoriaE++;
            } else {
                quantCategoriaB++;
            }
            
        }
        
        if (categoriaInput == 'e') {
            double porcentagemCategoriaE = (double) quantCategoriaE / nomes.length * 100;
            System.out.printf("Porcentagem de vendedores externos: %.1f%% %n", porcentagemCategoriaE);
        } else {
            double porcentagemCategoriaB = (double) quantCategoriaB / nomes.length * 100;
            System.out.printf("Porcentagem de vendedores do balcão: %.1f%% %n", porcentagemCategoriaB);
        }
        
        
        /**
         *
         * 5 - Calculando e exibindo dados do vendedor
         * que fez a menor venda
         */
        double menorVenda = 0;
        String nomeMenorVenda = "";
        char categoriaMenorVenda = ' ';
        
        for (int i = 0; i < vendas.length; i++) {
            
            if ((i == 0) || (vendas[i] < menorVenda)) {
                menorVenda = vendas[i];
                nomeMenorVenda = nomes[i];
                categoriaMenorVenda = categorias[i];
            }
            
        }
        
        System.out.println("\nMENOR VENDA");
        System.out.println("Nome: " + nomeMenorVenda);
        System.out.println("Categoria: " + categoriaMenorVenda);
        System.out.printf("Valor: R$%.2f %n", menorVenda);
        
        // :)
        
    }
    
}
