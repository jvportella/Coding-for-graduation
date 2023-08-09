#include <stdio.h>

int prodinterno (int n, int vetor1[], int vetor2[])
{
	for (int i = 0; i < n; i++)
	{
		printf ("Digite os dois valores do primeiro vetor: ");
		scanf ("%d", &vetor1[i]);
	}
	for (int z = 0; z < n; z++)
	{
		printf("Digite os dois valores do segundo vetor: ");
		scanf("%d", &vetor2[z]);
	}
	
	return ((vetor1[0]*vetor2[0]) + (vetor1[1]*vetor2[1]));
}

int main()
{
	int n = 2;
	int nvetor1[n];
	int nvetor2[n];
	
	printf("%d", prodinterno(2, nvetor1, nvetor2));
	
	return 0;
}
