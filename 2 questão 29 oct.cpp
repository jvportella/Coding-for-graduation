#include <stdio.h>

int consouvog (char caractere)
{
	if (caractere >= 65 && caractere <= 90)  // algoritmo para transformar letras maiusculas em minusculas
		{
			caractere = caractere + 32;
		}
	if (caractere == 'a' || caractere == 'b' || caractere == 'c' || caractere == 'd' || caractere == 'e')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	char letra;
	printf("Digite um caractere: ");
	scanf(" %c", &letra);
	
	printf ("%d", consouvog(letra));

	
	
	return 0;
}
