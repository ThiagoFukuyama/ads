
package vestibular;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class Vestibular {

    public static void main(String[] args) {
        
        final int NUMBER_OF_STUDENTS = 1200;
        final int NUMBER_OF_QUESTIONS = 100;
        final int PASSING_SCORE = 60;
        
        String[] names = new String[NUMBER_OF_STUDENTS];        
        int[] ids = new int[NUMBER_OF_STUDENTS];
        int[] grades = new int[NUMBER_OF_STUDENTS];
        int correctAnswers;
        String[] situations = new String[NUMBER_OF_STUDENTS];
        char[] studentAnswers = new char[NUMBER_OF_QUESTIONS];
        char[] answersSheet = new char[NUMBER_OF_QUESTIONS];        
        
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Entre com as respostas do gabarito: ");
        for (int i = 0; i < NUMBER_OF_QUESTIONS; i++) {
            
            System.out.print((i+1) + "- ");
            answersSheet[i] = scan.next().toLowerCase().charAt(0);
            
        }
        
        System.out.println("\nEntre com as informações de cada aluno: ");
        for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
            
            correctAnswers = 0;
            
            System.out.println((i+1) + "º aluno: ");
            System.out.println("-------------------");
            
            System.out.println("ID: ");
            ids[i] = scan.nextInt();
            
            System.out.println("Nome: ");
            names[i] = scan.next();
            
            System.out.println("Respostas do aluno\n");
            for (int j = 0; j < NUMBER_OF_QUESTIONS; j++) {
                
                System.out.println((j+1) + "ª -");
                studentAnswers[j] = scan.next().toLowerCase().charAt(0);
                
                if (studentAnswers[j] == answersSheet[j]) {
                    correctAnswers++;
                }
                
                if (correctAnswers < PASSING_SCORE) {
                    situations[i] = "REPROVADO";
                } else {
                    situations[i] = "APROVADO";
                }
                
            }
            
            grades[i] = correctAnswers;
            
        }
        
        System.out.println("RESULTADOS");
        System.out.printf("%10s %10s %10s %10s %n",
                        "ID", "NOME", "NOTA", "SITUAÇÃO");
        System.out.println("----------------------------------------");    
        
        for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
            System.out.printf("%10d %10s %10d %10s %n",
                        ids[i], names[i], grades[i], situations[i]);
        }
        
        scan.close();
        
    }
    
}
