
#include <stdio.h>

/*
 *
 * Foi divertido :)
 *
 */

typedef struct Product
{
    int id;
    float purchase_price;
    float selling_price;
    int quantity;
} Product;

void get_products(Product product[], int size);
void print_product(Product product);
void show_products(Product products[], int size);
int search_product(Product products[], int id, int size);

int main()
{
    const int NUM_PRODUCTS = 3;

    Product products[NUM_PRODUCTS];

    get_products(products, NUM_PRODUCTS);

    int menu_option = 0;
    int search_id;

    do
    {
        printf("\n---- MENU ---");
        printf("\n1 - Listar produtos");
        printf("\n2 - Buscar produto");
        printf("\n3 - Sair");
        printf("\nDigite a opcao desejada: ");
        scanf("%d", &menu_option);

        switch (menu_option)
        {
        case 1:
            show_products(products, NUM_PRODUCTS);
            break;

        case 2:
            printf("\nDigite o codigo do produto: ");
            scanf("%d", &search_id);

            int index = search_product(products, search_id, NUM_PRODUCTS);

            if (index == -1)
            {
                printf("\nProduto nao encontrado\n");
            }
            else
            {
                print_product(products[index]);
            }
            break;

        case 3:
            printf("\nEncerrando o sistema...\n");
            break;

        default:
            printf("\nOpcao invalida!\n");
            break;
        }

    } while (menu_option != 3);

    return 0;
}

void get_products(Product products[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nPRODUTO %d\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &products[i].id);

        printf("Preco de compra: ");
        scanf("%f", &products[i].purchase_price);

        printf("Preco de venda: ");
        scanf("%f", &products[i].selling_price);

        printf("Quantidade: ");
        scanf("%d", &products[i].quantity);
    }
}

void print_product(Product product)
{
    printf("\nCodigo: %d\n", product.id);
    printf("Preco de compra: R$%.2f\n", product.purchase_price);
    printf("Preco de venda: R$%.2f\n", product.selling_price);
    printf("Quantidade: %d\n", product.quantity);
}

void show_products(Product products[], int size)
{
    for (int i = 0; i < size; i++)
    {
        print_product(products[i]);
    }
}

int search_product(Product products[], int id, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (products[i].id == id)
            return i;
    }

    return -1;
}
