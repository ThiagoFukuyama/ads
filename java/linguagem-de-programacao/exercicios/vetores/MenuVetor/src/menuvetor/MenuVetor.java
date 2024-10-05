
package menuvetor;

import java.util.Scanner;

/**
 *
 * @author ThiagoFukuyama/MatheusBrando
 */

// Considerando o cadastro de 5 pessoas em uma agenda com os seguintes campos:
// RG, Nome, Endereço e Telefone. Construa uma tela que mostre o seguinte menu:
// ***** MENU ******
// 1. Cadastramento das informações
// 2. Pesquisar por RG
// 3. Sair
public class MenuVetor {

    public static void main(String[] args) {

        String[] rgs = new String[5];
        String[] names = new String[5];
        String[] addresses = new String[5];
        String[] cellphoneNumbers = new String[5];

        boolean rgExists;
        int registered = 0;
        int option = 0;

        Scanner scan = new Scanner(System.in);

        do {

            System.out.printf("%s%n %n %s%n %s%n %s%n",
                    "------- MENU -------",
                    "1. Cadastro de informações",
                    "2. Pesquisa por RG",
                    "3. Sair");
            option = scan.nextInt();

            if (option == 1) {

            }

        } while (option >= 1 && option <= 3);

        scan.close();
    }

}
