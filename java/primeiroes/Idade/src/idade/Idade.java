/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package idade;

import java.util.Scanner;

/**
 *
 * @author aluno
 */
public class Idade {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        // FEITO POR GLEI
        int idade;
        Scanner scan = new Scanner(System.in);
        
        System.out.printf("Digite sua idade: ");
        idade = scan.nextInt();
        
        if (idade >= 18) {
            System.out.println("Tu pode bebe fi");
        } else {
            System.out.println("Tu é bebezão, pode bebe não");
        }
     
        // FEITO POR GLENN
        int iNdade;
        
        Scanner GLENN = new Scanner(System.in);
        
        System.out.println("\nDigite sua idade");
        iNdade = GLENN.nextInt();
        
        for (int i = 0; i <= 1000; i++) {
            System.out.println("estou ficando insano KKKKKKKKKKKKKKKKKKK");
        }
        
    }
    
}
