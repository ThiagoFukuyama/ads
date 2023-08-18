package acessoarquivo;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Acessoarquivo {

    public static void main(String[] args) {
        File arq = new File("dados.txt");
        
        try {
            Scanner scan = new Scanner(arq);
           
            while (scan.hasNext()) {
                System.out.printf("%-12d %-12s %-12d %-12d R$ %.2f\n",
                    scan.nextInt(),
                    scan.next(),
                    scan.nextInt(),
                    scan.nextInt(),
                    scan.nextDouble()
                );
            }
        } catch (FileNotFoundException ex) {
            System.out.println("O arquivo não existe");
        } 
        
    }
    
}
