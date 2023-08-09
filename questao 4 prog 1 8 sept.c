#include <stdio.h>
#include <stdlib.h>

int main()
{
    int custoinicial, custofinal;

    printf("Digite o valor inicial do carro: ");
    scanf("%d", &custoinicial);

    // considerando que os impostos de 45% !nao! sejam sobre o valor já adicionado de 28% do distribuidor;
	custofinal = custoinicial + custoinicial*0.28 + custoinicial*0.45;

	printf("\nO valor final do carro sera: %d", custofinal);



    return 0;
}
