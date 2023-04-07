
package totalcompra;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class TotalCompra {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        int idProduto;
        int quantidadeComprada;
        double precoTotal = 0;
        
        System.out.println("Insira o código do produto: ");
        idProduto = scan.nextInt();
        
        System.out.println("Insira a quantidade comprada: ");
        quantidadeComprada = scan.nextInt();
        
        switch (idProduto) {
            case 1:
                precoTotal = quantidadeComprada * 5.0;
                break;
            case 2:
                precoTotal = quantidadeComprada * 6.0;
                break;
            case 3:
                precoTotal = quantidadeComprada * 8.0;
                break;
        }
        
        System.out.printf("Preço total da compra é de: R$%.2f %n", precoTotal);
        
    }
    
}
