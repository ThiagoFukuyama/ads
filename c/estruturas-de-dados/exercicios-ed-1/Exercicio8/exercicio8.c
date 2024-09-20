
#include <stdio.h>

int main() {
	int inteiro = 5;
	float decimal = 10.0;
	double duplo = 50.00;
	char caractere = 'D';

	printf("Variaveis sao locais na memoria (geralmente RAM) do computador \
que podem ser reservadas para armazenamento e manipulacao de dados.\n");

	printf("\nNa linguagem de programacao C, variaveis podem ser declaradas e atribuidas valores \
na seguinte ordem: \"<tipo> <nome> = <valor>;\". Exemplo: \n");

	printf("\nint numero = 56;\n");

	printf("\nNa memoria do computador, podem ser identificadas por enderecos unicos em hexadecimal. \
Alem disso, a quantidade reservada em bytes pode variar de acordo com o tipo da variavel. Vejamos alguns exemplos: \n");

	printf("\nint inteiro \n Valor: %d \n Tamanho (bytes): %d \n Endereco: %p\n", inteiro, sizeof(inteiro), (void*)&inteiro);
	printf("\nfloat decimal \n Valor: %.1f \n Tamanho (bytes): %d \n Endereco: %p\n", decimal, sizeof(decimal), (void*)&decimal);
	printf("\ndouble duplo \n Valor: %.1f \n Tamanho (bytes): %d \n Endereco: %p\n", duplo, sizeof(duplo), (void*)&duplo);
	printf("\nchar caractere \n Valor: %c \n Tamanho (bytes): %d \n Endereco: %p\n", caractere, sizeof(caractere), (void*)&caractere);

	return 0;
}
