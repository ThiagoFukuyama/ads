
package calculator;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class Calculator {
    
    private static final Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws Exception {
        
        double n1;
        double n2;
        char operation;
        
        char exit = 'n';
        
        do {            
            
            System.out.println("\nCALCULADORA\n"
                                + "+\n"
                                + "-\n"
                                + "x\n"
                                + "/\n");
            operation = scan.next().charAt(0);
            
            System.out.println("Digite o primeiro número: ");
            n1 = scan.nextDouble();
            
            System.out.println("Digite o segundo número: ");
            n2 = scan.nextDouble();
            
            switch (operation) {
                case '+':
                    System.out.println("Soma: " + sum(n1, n2));
                    break;
                case '-':
                    System.out.println("Subtração: " + subtract(n1, n2));
                    break;
                case 'x':
                    System.out.println("Multiplicação: " + multiply(n1, n2));
                    break;
                case '/':
                    try {
                        System.out.println("Divisão: " + divide(n1, n2));
                    } catch (ArithmeticException e) {
                        System.out.println(e.getMessage());
                    }
                    break;
                default:
                    throw new Exception("Operação inválida.");
            }
            
            do {                
                System.out.println("Deseja realizar mais operações? (s/n)");
                exit = scan.next().toLowerCase().charAt(0);
                if (exit != 's' && exit != 'n') {
                    System.out.println("Opção inválida.\n");
                }
            } while (exit != 's' && exit != 'n');
            
            
        } while (exit != 'n');
        
    }
    
    public static double sum(double x, double y) {
        return  x + y;
    }
    
    public static double subtract(double x, double y) {
        return  x - y;
    }
        
    public static double multiply(double x, double y) {
        return  x * y;
    }
            
    public static double divide(double x, double y) throws ArithmeticException {
        if (y == 0) {
            throw new ArithmeticException("O divisor não pode ser 0");
        }
        
        return  x / y;
    }
    
}
