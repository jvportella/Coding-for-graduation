#include <stdio.h>
#include <stdlib.h>


int main()
{
	int dividendo;
	
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &dividendo);
	
 
	if ( dividendo%3 == 0 && dividendo%7 == 0)
	{
		if (dividendo%2 == 0)
		{
			printf("\nO numero selecionado eh divisivel tanto por 3, por 7 e por 2.\n");
		}
		else
		{
			printf("\nO numero selecionado eh divisivel por 3 e por 7, entretanto, nao eh divisivel por 2.\n");
		}
	}
	else
	{	
		if (dividendo%4 == 0)
		{
			printf("O numero selecionado nao eh divisivel por 3 e por 7 juntos, entretanto, eh divisivel por 4.\n");
		}
		else
		{
			printf("O numero selecionado nao eh divisivel por 3 e por 7 juntos e nem por 4.\n");
		}
	}


	return 0;
} 	 	 