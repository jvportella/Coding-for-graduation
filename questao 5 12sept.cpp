#include <stdlib.h>
#include <stdio.h>

int main()
{
	int x, y;
	
	//recebendo os valores de x e y
	printf("Determine o valor de x: ");
	scanf("%d", &x);
	
	printf("\nDetermine o valor de y: ");
	scanf("%d", &y);
	
	//um comando if para cada possibilidade, a exemplo de caso o x e y sejam maiores que zero ou vice versa
	if (x > 0 && y > 0)
	{
		//retornando de acordo com a sua posiçao no plano cartesiano
		printf("\nSua funcao esta localizada no primeiro quadrante.\n");
		return 0;
	}
	
	if (x > 0 && y < 0)
	{
		printf("\nSua funcao esta localizada no quarto quadrante.\n");
		return 0;
	}
	
	if (x < 0 && y > 0)
	{
		printf("\nSua funcao esta localizada no segundo quadrante.\n");
		return 0;
	}
	
	if (x < 0 && y < 0)
	{
		printf("\nSua funcao esta localizada no terceiro quadrante.\n");
		return 0;
	}
	
	if (x == 0 && y > 0)
	{
		printf("\nSua funcao esta localizada entre o primeiro e o segundo quadrante.\n");
		return 0;
	}
	
	if (x < 0 && y == 0)
	{
		printf("\nSua funcao esta localizada entre o segundo e o terceiro quadrante.\n");
		return 0;
	}
	
	if (x == 0 && y == 0)
	{
		printf("\nSua funcao esta na origem e portanto nao esta incluida em nenhum quadrante.\n");
		return 0;
	}
	
	
	return 0;
}