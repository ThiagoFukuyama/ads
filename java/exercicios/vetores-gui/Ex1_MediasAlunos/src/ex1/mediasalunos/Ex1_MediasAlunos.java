
package ex1.mediasalunos;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class Ex1_MediasAlunos {

    public static void main(String[] args) {

        String[] students = new String[10];
        double[] finalGrades = new double[10];

        Scanner scan = new Scanner(System.in);

        /**
         *
         * Inserindo as informações
         */
        System.out.println("Insira as informações dos alunos: ");
        for (int i = 0; i < students.length; i++) {

            System.out.println("\nAluno " + (i + 1));

            System.out.print("Nome: ");
            students[i] = scan.next();

            System.out.print("Média final: ");
            finalGrades[i] = scan.nextDouble();

        }

        /**
         *
         * Calculando a média total da turma
         */
        double gradesSum = 0;
        double classAverage;

        for (int i = 0; i < students.length; i++) {
            gradesSum += finalGrades[i];
        }

        classAverage = gradesSum / students.length;
        System.out.printf("%nMédia da turma: %.1f %n", classAverage);

        /**
         *
         * Calculando quantos alunos estão acima da média da classe
         */
        int atAverageCount = 0;
        int aboveAverageCount = 0;
        int approvedCount;

        for (int i = 0; i < students.length; i++) {

            // Não entendi muito bem as questões b) e c), mas fiz isso
            if (finalGrades[i] > classAverage) {
                aboveAverageCount++;
            }

            if (finalGrades[i] == classAverage) {
                atAverageCount++;
            }

        }

        approvedCount = atAverageCount + aboveAverageCount;

        System.out.println("Total de alunos acima da média da classe: " + aboveAverageCount);
        System.out.println("Total de alunos na média ou acima: " + approvedCount);

        /**
         *
         * Calculando a maior média
         */
        double highestGrade = finalGrades[0];
        String highestGradeStudentName = "";

        for (int i = 1; i < students.length; i++) {

            if (finalGrades[i] > highestGrade) {
                highestGrade = finalGrades[i];
                highestGradeStudentName = students[i];
            }

        }

        System.out.println("\n--- Maior Média ---");

        System.out.println("Aluno: " + highestGradeStudentName);
        System.out.printf("Média: %.1f %n %n", highestGrade);

        scan.close();

    }

}
