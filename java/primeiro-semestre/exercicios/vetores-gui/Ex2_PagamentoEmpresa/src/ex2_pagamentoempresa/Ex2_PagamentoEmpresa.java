
package ex2_pagamentoempresa;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class Ex2_PagamentoEmpresa {

    public static void main(String[] args) {
        
        final int TOTAL_EMPLOYEES = 10;
        
        String[] employees = new String[TOTAL_EMPLOYEES];
        char[] genders = new char[TOTAL_EMPLOYEES];
        double[] salaries = new double[TOTAL_EMPLOYEES];        
        
        Scanner scan = new Scanner(System.in);

        
        /**
        *
        * Recebimento dos dados
        */
        System.out.println("Insira as informa��es dos funcion�rios: \n");
        for (int i = 0; i < TOTAL_EMPLOYEES; i++) {
            
            System.out.println("Funcion�rio " + (i+1));
            System.out.println("--------------");
            
            System.out.print("Nome: ");
            employees[i] = scan.next();
            
            System.out.println("Sexo: (M/F)");
            genders[i] = scan.next().toUpperCase().charAt(0);
            
            System.out.print("Sal�rio: R$");
            salaries[i] = scan.nextDouble();
            
            System.out.print(System.lineSeparator());
            
        }
        
        
        /**
        *
        * Valor total da folha de pagamento
        */
        double sumOfSalaries = getSumOfSalaries(salaries);
        System.out.printf("%nTotal da folha de pagamento: R$%.2f %n", sumOfSalaries);
        
        
        /**
        *
        * M�dia dos sal�rios
        */
        double averageSalary = sumOfSalaries / salaries.length;
        System.out.printf("M�dia salarial: R$%.2f %n", averageSalary);
        
        
        /**
        *
        * Aumentos
        */
        for (int i = 0; i < TOTAL_EMPLOYEES; i++) {

            if (salaries[i] >= averageSalary) {
                salaries[i] = salaries[i] + (salaries[i] * 0.075);
            } else {
                salaries[i] = salaries[i] + (salaries[i] * 0.15);
            }
            
        }
        
        System.out.println("\nSal�rios com aumento: ");
        System.out.printf("%-10s %-10s %-10s %n", "Nome", "Sexo", "Sal�rio");
        for (int i = 0; i < TOTAL_EMPLOYEES; i++) {
            System.out.printf("%-10s %-10c %-10.2f %n", employees[i], genders[i], salaries[i]);
        }
        
        
        /**
        *
        * Valor total da folha de pagamento atualizado
        */
        sumOfSalaries = getSumOfSalaries(salaries);
        System.out.printf("%nTotal da folha de pagamento atualizado: R$%.2f %n", sumOfSalaries);

        
        /**
        *
        * Soma dos sal�rios para cada sexo
        */
        double maleSumOfSalaries = 0;
        double femaleSumOfSalaries = 0;

        for (int i = 0; i < TOTAL_EMPLOYEES; i++) {
            
            if (genders[i] == 'M') {
                maleSumOfSalaries += salaries[i];
            } else {
                femaleSumOfSalaries += salaries[i];
            }
            
        }
        
        System.out.printf("%nTotal masculino de sal�rios: R$%.2f %n", maleSumOfSalaries);
        System.out.printf("Total feminino de sal�rios: R$%.2f %n", femaleSumOfSalaries);

        
        /**
        *
        * Procura pelo menor sal�rio
        */
        double lowestSalary = salaries[0];
        String lowestSalaryEmployeeName = employees[0];
        
        for (int i = 1; i < TOTAL_EMPLOYEES; i++) {
            
            if (salaries[i] < lowestSalary) {
                lowestSalary = salaries[i];
                lowestSalaryEmployeeName = employees[i];
            }
            
        }

        System.out.println("\n--- Menor sal�rio ---");
        System.out.println("Funcion�rio: " + lowestSalaryEmployeeName);
        System.out.printf("Sal�rio: R$%.2f %n", lowestSalary);

        
        scan.close();
        
    }
    
    
    /**
    * Calcula o total da folha de pagamento
    * 
    * @param salaries - vetor com sal�rios a serem somados.
    * @return a soma de todos os sal�rios do vetor.
    */
    public static double getSumOfSalaries(double[] salaries) {
        
        double total = 0;
        int arrayLength = salaries.length;
        for (int i = 0; i < arrayLength; i++) {
           total += salaries[i]; 
        }
        return total;
        
    }
    
}
