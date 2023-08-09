#include <stdlib.h>
#include <stdio.h>


int main()
{
	int a, b, aux;
	
	printf("Digite o valor de a (numero inteiro): ");
	scanf("%d", &a);
		
	printf("Digite o valor de b (numero inteiro diferente do anterior): ");
	scanf("%d", &b);
	
	
	aux = a;
	a = b;
	b = aux;
		
		
	if (a == b)
	{
		printf("\nNao digite valores iguais. Fechando aplicacao...\n");
		return 0;   
	}
	else
	{
		printf("\nO valor de a eh %d e o valor de b eh %d.\n", a, b);    
	}

		
		
	return 0;
}	