
package estoqueloja;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama
 */
public class EstoqueLoja {

    public static void main(String[] args) {
        
        int[] codigos = { 110, 112, 130, 114, 123, 456, 100, 200 };
        String[] descricoes = { "botão", "linha", "tesoura", "fita", "revista", "barbante", "agulha", "tecido" };
        int[] estoques = { 20, 10, 3, 8 ,3, 10, 8, 12 };
        int[] estoquesMinimos = { 15, 12, 5, 6 ,2, 15, 6, 10 };
        double[] precosUnitarios = { 0.30, 2.60, 13.00, 0.80, 10.00, 8.00, 5.20, 3.90 };

        Scanner scan = new Scanner(System.in);
        int opcao;
        
        int codigoDigitado;
        int indexCodigoDigitado = 0;
        boolean codigoValido;
        int qtdeParaVenda;
        double precoASerPago;
        int qtdeEmFalta;
        
        System.out.printf("%n%-15s %-15s %-15s %-15s %-15s %n", "Código", "Descrição", "Estoque", "Estoque Mínimo", "Preço Unitário");
        for (int i = 0; i < codigos.length; i++) {
            System.out.printf("%-15d %-15s %-15d %-15d %-15.2f %n", codigos[i], descricoes[i].toUpperCase(), estoques[i], estoquesMinimos[i], precosUnitarios[i]);
        }
        
        do {            
           
            System.out.printf("%n %s%n %s%n %s%n %s%n %n%s",
                            "----- MENU -----",
                            "1- Efetuar venda",
                            "2- Verificar estoque mínimo",
                            "3- Sair",
                            "Digite a opção desejada: ");
            opcao = scan.nextInt();
            
            switch(opcao) {
                
                /**
                *
                * EFETUAR VENDA
                */
                case 1:
                    System.out.print("\nDigite o código do produto: ");
                    codigoDigitado = scan.nextInt();
                    codigoValido = false;
                    
                    for (int i = 0; i < codigos.length; i++) {
                        if (codigoDigitado == codigos[i]) {
                            codigoValido = true;
                            indexCodigoDigitado = i;
                        }
                    }
                    
                    if (!codigoValido) {
                        System.out.println("\n !(CÓDIGO INEXISTENTE) \n");
                    } else {
                        System.out.print("Digite a quantidade desejada para venda: ");
                        qtdeParaVenda = scan.nextInt();
                        
                        if (!(qtdeParaVenda <= estoques[indexCodigoDigitado])) {
                            System.out.println("\n !(ESTOQUE INSUFICIENTE) \n");
                        } else {
                            precoASerPago = qtdeParaVenda * precosUnitarios[indexCodigoDigitado];
                            estoques[indexCodigoDigitado] -= qtdeParaVenda;
                            System.out.printf("\nValor a ser pago: %.2f %n", precoASerPago);
                        }
                    }
                    break;
                   
                /**
                *
                * VERIFICAR ESTOQUE MÍNIMO
                */
                case 2:
                    System.out.println("\nProdutos abaixo do estoque mínimo: ");
                    for (int i = 0; i < codigos.length; i++) {
                        if (estoques[i] < estoquesMinimos[i]) {
                            qtdeEmFalta = estoquesMinimos[i] - estoques[i];
                            System.out.printf("%-8s - %d EM FALTA %n", descricoes[i].toUpperCase(), qtdeEmFalta);
                        }
                    }
                    break;
                    
                /**
                *
                * ENCERRAR O PROGRAMA
                */
                case 3:
                    System.out.printf("%n%-15s %-15s %-15s %-15s %-15s %n", "Código", "Descrição", "Estoque", "Estoque Mínimo", "Preço Unitário");
                    for (int i = 0; i < codigos.length; i++) {
                        System.out.printf("%-15d %-15s %-15d %-15d %-15.2f %n", codigos[i], descricoes[i].toUpperCase(), estoques[i], estoquesMinimos[i], precosUnitarios[i]);
                    }
                    System.out.println("\nENCERRANDO O SISTEMA. \n");
                    break;
                
                /**
                *
                * OPÇÃO INVÁLIDA
                */
                default:
                    System.out.println("\n !(OPÇÃO INVÁLIDA)");
                    break;
            }
            
        } while (opcao != 3);
        
        scan.close();
        
    }
    
}
