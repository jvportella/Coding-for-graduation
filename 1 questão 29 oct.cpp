#include <stdio.h>
#include<stdlib.h>

int numbinario (int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return numbinario (n / 2) * 10 + n % 2;
	}
	
}

int main()
{	
	int valor;
	printf ("Digite o valor inteiro a ser convertido em binario: ");
	scanf ("%d", &valor);
	
	printf("%d", numbinario(valor));
	
	return 0;
}

