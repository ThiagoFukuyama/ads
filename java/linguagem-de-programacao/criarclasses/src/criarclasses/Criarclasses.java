
package criarclasses;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class Criarclasses {
    
    public static final String FILE_PATH = "dados.txt";

    public static void main(String[] args) {
        
        File file = new File(FILE_PATH);
        ArrayList<Product> products = new ArrayList<>();
        
        try (Scanner scan = new Scanner(file)) {
            
            while (scan.hasNext()) {
                products.add(new Product(scan.nextInt(), scan.next(), scan.nextInt(), scan.nextInt(), scan.nextDouble()));
            }
            
            System.out.printf("\033[0;1m%-15s %-15s %-15s %-15s %-15s %n", 
                "ID", 
                "NOME", 
                "ESTOQUE", 
                "ESTOQUE MÍNIMO", 
                "PREÇO UNITÁRIO"
            );
            
            for (Product product : products) {
                System.out.printf("%-15d %-15s %-15d %-15d R$ %-15.2f %n", 
                    product.getId(), 
                    product.getName(), 
                    product.getAmount(), 
                    product.getMinimumAmount(), 
                    product.getPrice()
                );
            }
            
        } catch (FileNotFoundException e) {
            System.out.println("Arquivo " + FILE_PATH + " não encontrado.");
        }
        
    }
    
}
