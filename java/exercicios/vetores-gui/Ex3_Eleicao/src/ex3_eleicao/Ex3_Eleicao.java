
package ex3_eleicao;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class Ex3_Eleicao {

    public static void main(String[] args) {
        
        final int TOTAL_VOTES = 15;
        
        String[] candidates = { "Monteiro Lobato", "Euclides da Cunha", "Paulo Freire" };
        int[] candidatesNumbers = { 15, 25, 35 };
        int[] candidateVoteCounts = new int[candidates.length];
        int[] votes = new int[TOTAL_VOTES];
        
        Scanner scan = new Scanner(System.in);
        
        
        System.out.println("QUE COMECEM AS ELEIÇÕES!!! \n");
        for (int i = 0; i < candidates.length; i++) {
            System.out.printf("%-18s %-18d %n", candidates[i], candidatesNumbers[i]);
        }
        
        
        /**
        *
        * Zerando os votos
        */
        for (int i = 0; i < candidateVoteCounts.length; i++) {
            candidateVoteCounts[i] = 0;
        }
       
        
        /**
        *
        * Recebendo os votos
        */
        for (int i = 0; i < TOTAL_VOTES; i++) {
            
            System.out.print("\nDigite o número do candidato escolhido: ");
            votes[i] = scan.nextInt();
            System.out.println("OBRIGADO POR VOTAR!!!");
            
        }
        
        
        /**
        *
        * Contando os votos
        */
        for (int i = 0; i < TOTAL_VOTES; i++) {
            
            for (int j = 0; j < candidates.length; j++) {
                
                if (votes[i] == candidatesNumbers[j]) {
                    candidateVoteCounts[j]++;
                }
                        
            }
            
        }
        
        
        /**
        *
        * Calculando o vencedor
        */
        String winner = candidates[0];
        int winnerVoteCount = candidateVoteCounts[0];
        
        for (int i = 1; i < candidateVoteCounts.length; i++) {
            
            if (candidateVoteCounts[i] > winnerVoteCount) {
                winner = candidates[i];
                winnerVoteCount = candidateVoteCounts[i];
            }
            
        }
        
        
        /**
        *
        * Mostrando os resultados
        */
        System.out.println("\n----- RESULTADOS -----");
        for (int i = 0; i < candidates.length; i++) {
            System.out.printf("%-18s %-18d %n", candidates[i], candidateVoteCounts[i]);
        }
        
        System.out.println("\n----- VENCEDOR -----");
        System.out.println(winner);
        System.out.println(winnerVoteCount + " votos!");
        
        
        scan.close();
        
    }
    
}
