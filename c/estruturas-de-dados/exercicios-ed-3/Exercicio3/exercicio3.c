
#include <stdio.h>

int main()
{
	const int NUM_PRODUCTS = 2;

	int ids[NUM_PRODUCTS];
	float unitary_values[NUM_PRODUCTS];
	int sold_quantities[NUM_PRODUCTS];
	float item_totals[NUM_PRODUCTS];

	printf("Registe os produtos: ");
	for (int i = 0; i < NUM_PRODUCTS; i++)
	{
		printf("\nCODIGO: ");
		scanf("%d", &ids[i]);

		printf("VALOR UNITARIO: ");
		scanf("%f", &unitary_values[i]);

		printf("QUANTIDADE VENDIDA: ");
		scanf("%d", &sold_quantities[i]);

		item_totals[i] = sold_quantities[i] * unitary_values[i];
	}

	int total_items_sold = 0;
	float total_value = 0;
	float sum_unitary_prices = 0;

	for (int i = 0; i < NUM_PRODUCTS; i++)
	{
		total_items_sold += sold_quantities[i];
		total_value += item_totals[i];
		sum_unitary_prices += unitary_values[i];
	}

	float average_quantity = total_items_sold / (float)NUM_PRODUCTS;
	float average_unitary_price = sum_unitary_prices / (float)NUM_PRODUCTS;
	float average_total = total_value / (float)NUM_PRODUCTS;

	printf("\nProdutos: ");
	printf("\n%-14s %-14s %-14s %-14s", "CODIGO", "V. UNIT.", "QTD", "TOTAL ITEM");

	for (int i = 0; i < NUM_PRODUCTS; i++)
	{
		printf("\n%-14d R$%-14.2f %-14d R$%-14.2f", ids[i], unitary_values[i], sold_quantities[i], item_totals[i]);
	}

	printf("\n\nTotal de itens vendidos: %d", total_items_sold);
	printf("\nValor total vendido: R$%.1f", total_value);
	printf("\nMedia de itens vendidos: %.1f", average_quantity);
	printf("\nPreco Unitario medio: R$%.2f", average_unitary_price);
	printf("\nTotal medio: R$%.1f", average_total);

	while (1)
	{
		int search_id;

		printf("\n\nPESQUISA POR PRODUTO");
		printf("\nDigite o codigo do produto: ");
		scanf("%d", &search_id);

		int found = 0;
		for (int i = 0; i < NUM_PRODUCTS; i++)
		{
			if (ids[i] == search_id)
			{
				printf("\n%-14s %-14s %-14s %-14s", "CODIGO", "V. UNIT.", "QTD", "TOTAL ITEM");
				printf("\n%-14d R$%-14.2f %-14d R$%-14.2f", ids[i], unitary_values[i], sold_quantities[i], item_totals[i]);
				found = 1;
				break;
			}
		}

		if (!found)
		{
			printf("\nProduto nao encontrado.");
		}

		int should_continue;
		printf("\n\nDeseja pesquisar novamente? (1 - SIM / 0 - NAO)");
		scanf("%d", &should_continue);

		if (!should_continue)
		{
			printf("\nEncerrando o sistema...");
			break;
		}
	}

	return 0;
}
