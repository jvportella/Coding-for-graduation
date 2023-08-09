#include <stdio.h>

int calcularfatorial(int fatorial)
{
	int resultado = 1;
	for ( ; fatorial >= 1; fatorial--)
	{
		resultado = resultado * fatorial;
	}
	
	return resultado;
}
int calculararranjo(int valorn, int valork)
{
	int resultado;
	int aux = (valorn - valork);
	resultado = (calcularfatorial(valorn))/ calcularfatorial(aux);
	
	return resultado;
}

int main()
{
	int n, k;
	printf("Digite o valor de n: ");
	scanf(" %d", &n);
	printf("Digite o valor de k: ");
	scanf(" %d", &k);
	
	printf("O numero total de arranjos (combinacoes) eh: %d", calculararranjo(n, k));	
}
