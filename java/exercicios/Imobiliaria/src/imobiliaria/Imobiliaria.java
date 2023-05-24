
package imobiliaria;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class Imobiliaria {

    public static void main(String[] args) {
        
        int[] ids = { 110, 112, 130, 114, 119, 150, 160, 164 };
        char[] types = { 'r', 'g', 'r', 'r', 'c', 'g', 'c', 'r' };
        double[] baseRents = { 400, 800, 600, 300, 1500, 1100, 1800, 900 };
        int[] status = { 1, 1, 2, 1, 2, 1, 1, 2 };
        
        Scanner scan = new Scanner(System.in);
                
        int occupiedAmount = 0;
        double occupiedRentSum = 0;
        
        int counterR = 0;
        int counterG = 0;
        int counterC = 0;
        
        System.out.printf("%-12s %-12s %-12s %-12s %n",
                        "CÓDIGO", "TIPO", "ALUGUEL BASE", "STATUS");
        for (int i = 0; i < ids.length; i++) {
            
            System.out.printf("%-12d %-12c R$%-12.2f %-12d %n",
                            ids[i], types[i], baseRents[i], status[i]);
            
            if (status[i] == 1) {
                occupiedAmount++;
                occupiedRentSum += baseRents[i];
            }
            
            switch (types[i]) {
                case 'r':
                    counterR++;
                    break;
                case 'g':
                    counterG++;
                    break;
                case 'c':
                    counterC++;
                    break;
            }
            
        }       
        
        double occupiedAverageRent = occupiedRentSum / occupiedAmount;
        
        double percentageR = (double) counterR / ids.length * 100;
        double percentageG = (double) counterG / ids.length * 100;
        double percentageC = (double) counterC / ids.length * 100;
        
        System.out.printf("%nA média de aluguel dos imóveis ocupados é: R$%.2f %n", occupiedAverageRent);
        
        System.out.println("\nPorcentagem de imóveis");
        System.out.printf("Residencial - %.1f%% %n", percentageR);
        System.out.printf("Galpão - %.1f%% %n", percentageG);
        System.out.printf("Comercial - %.1f%% %n", percentageC);
        
        
        System.out.println("\nDigite o código do imóvel para calcular seu aluguel final: ");
        int idInput = scan.nextInt();
        double finalRent = 0;
        for (int i = 0; i < ids.length; i++) {
            
            if (idInput == ids[i]) {
                
                switch (types[i]) {
                    case 'r':
                        finalRent = baseRents[i] + (baseRents[i] * 0.05);
                        break;
                        
                    case 'g':
                        finalRent = baseRents[i] + (baseRents[i] * 0.1);
                        break;
                        
                    case 'c':
                        finalRent = baseRents[i] + (baseRents[i] * 0.2);
                        break;                        
                }
                
                System.out.printf("Alugel final: R$%.2f %n", finalRent);
                
            }
            
        }
        
    }
    
}
