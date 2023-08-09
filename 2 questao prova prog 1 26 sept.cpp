#include <stdio.h>
#include <conio.h>

int main()
{
	char nome[30];
	
	
	printf("Digite seu nome: ");
	fgets(nome, 30, stdin);
	
	
	for(int i = 0; i < 30; i++)
	{
		if (nome[i] >= 65 && nome[i] <= 90)
		{
			nome[i] = nome[i] + 32;
		}
	}

	
	printf("\nSeu nome eh %s", nome);
	
	return 0;
}
