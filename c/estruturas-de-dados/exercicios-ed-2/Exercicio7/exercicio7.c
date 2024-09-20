
#include <stdio.h>

int main()
{
    const int NUM_PRODUCTS = 100;

    float purchase_prices[NUM_PRODUCTS];
    float selling_prices[NUM_PRODUCTS];

    for (int i = 0; i < NUM_PRODUCTS; i++)
    {
        printf("\nPRODUTO %d\n", i + 1);

        printf("Preco de compra: ");
        scanf("%f", &purchase_prices[i]);

        printf("Preco de venda: ");
        scanf("%f", &selling_prices[i]);
    }

    int low_profit_count = 0;
    int medium_profit_count = 0;
    int high_profit_count = 0;

    for (int i = 0; i < NUM_PRODUCTS; i++)
    {
        float profit = selling_prices[i] - purchase_prices[i];
        float profit_percentage = (profit / purchase_prices[i]) * 100;

        if (profit_percentage < 10)
        {
            low_profit_count++;
        }
        else if (profit_percentage >= 10 && profit_percentage <= 20)
        {
            medium_profit_count++;
        }
        else
        {
            high_profit_count++;
        }
    }

    printf("\nRESULTADOS DE LUCRO\n");
    printf("Menor que 10%%: %d\n", low_profit_count);
    printf("Entre 10%% e 20%%: %d\n", medium_profit_count);
    printf("Maior que 20%%: %d\n", high_profit_count);

    return 0;
}
