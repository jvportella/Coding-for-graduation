#include <stdio.h>

void imprimir (int n, int vetor1[], char vetor2[])
{
	for (int i = 0; i < 3; i++)
	{
		printf("%c", vetor2[0]);
		for (i = 1; i < vetor1[0]; i++)
		{
			printf ("%c", vetor2[0]);
		}
		printf("%c", vetor2[1]);
		for (i = 1; i < vetor1[1]; i++)
		{
			printf ("%c", vetor2[1]);
		}
		printf("%c", vetor2[2]);
		for (i = 1; i < vetor1[2]; i++)
		{
			printf ("%c", vetor2[2]);
		}
		printf ("\n"); // para fins perfeccionistas
	}
}

int main()
{
	int n = 3;
	int nVetor1[n] = {8, 3, 4}; // o primeiro caractere do vetor2 sera impresso 8 vezes, o segundo 3 vezes e o terceiro 4 vezes.
	char nVetor2[n] = {'a', 'b', 'c'};
	
	imprimir(3, nVetor1, nVetor2);
	
	return 0;
}
// fiz por meio de um procedimento e nao uma funçao porque nao sabia o que colocar em ''return'' ao final
