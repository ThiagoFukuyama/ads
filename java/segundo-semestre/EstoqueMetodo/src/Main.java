import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static final String FILE_PATH = "dados.txt";
    public static void main(String[] args) {

        File arquivo = new File(FILE_PATH);
        Scanner input = new Scanner(System.in);
        int opcaoMenu = 0;

        try {
            ArrayList<Produto> produtos = lerDados(arquivo);

            do {
                System.out.println("--- MENU ---\n"
                        + "1 - Exibir Produtos\n"
                        + "2 - Realizar Compra\n"
                        + "3 - Sair\n"
                );
                System.out.println("Digite a opção desejada: ");
                opcaoMenu = input.nextInt();

                switch (opcaoMenu) {
                    case 1:
                        System.out.printf("%n%-14s %-14s %-14s %-14s %n", "Código", "Descrição", "Estoque", "Preço de Compra");
                        exibirDados(produtos);
                        System.out.print(System.lineSeparator());
                        break;
                    case 2:
                        System.out.println("Digite o código do produto comprado: ");
                        int codigo = input.nextInt();
                        System.out.println("Digite a quantidade comprada: ");
                        int quantidade = input.nextInt();
                        efetuarCompra(produtos, codigo, quantidade);
                        break;
                    case 3:
                        System.out.println("\nEncerrando o sistema.");
                        break;
                    default:
                        System.out.println("\nOpção inválida.\n");
                        break;
                }
            } while (opcaoMenu != 3);

        } catch (FileNotFoundException e) {
            System.out.println(e.getMessage());
        }

    }

    public static ArrayList<Produto> lerDados(File arquivo) throws FileNotFoundException {
        Scanner scan = new Scanner(arquivo);
        ArrayList<Produto> produtos = new ArrayList<>();
        while (scan.hasNext()) {
            produtos.add(new Produto(scan.nextInt(), scan.next(), scan.nextInt(), scan.nextDouble()));
        }
        return produtos;
    }

    public static void exibirDados(ArrayList<Produto> produtos) {
        for (Produto produto : produtos) {
            System.out.printf("%-14d %-14s %-14d %-14.2f %n",
                    produto.getId(),
                    produto.getDescricao(),
                    produto.getEstoque(),
                    produto.getPrecoCompra()
            );
        }
    }

    public static void efetuarCompra(ArrayList<Produto> produtos, int idProduto, int quantidadeComprada) {
        if (quantidadeComprada < 0) {
            System.out.println("\nQuantidade inválida.\n");
            return;
        }

        boolean contemId = false;
        int indexProduto = 0;

        for (int i = 0; i < produtos.size(); i++) {
            if (produtos.get(i).getId() == idProduto) {
                contemId = true;
                indexProduto = i;
                break;
            }
        }

        if (!contemId) {
            System.out.println("\nNenhum produto de código " + idProduto + " encontrado.\n");
            return;
        }

        Produto produtoComprado = produtos.get(indexProduto);
        produtoComprado.setEstoque(produtoComprado.getEstoque() + quantidadeComprada);
        System.out.println("\nEntrada efetuada.\n");
    }
}