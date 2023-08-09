#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define MAX 100

int main() {
	
	int valorRecebido[MAX];
	int maiorValor = 0;
	int aux = 1;
	
//	do {
//		system("cls");
		printf("\t\t********\t Se desejar finalizar o programa, digite 0. \t********\n");
		
		for (int i = 0; i < 3; i++) {
			do {
			printf ("Digite um valor e o programa, quando finalizado, retornara o maior valor recebido: ");
			scanf("%d", &valorRecebido[i]);
			
			} while (valorRecebido[i] != 0);
		}
		
//	} while (valorRecebido[i] != 0);
	
	for (int z = 1; z < MAX; z++) {
		maiorValor = valorRecebido[0];
		
		if (valorRecebido[z] > valorRecebido[z - 1])
			maiorValor = valorRecebido[z];
	}
	
	printf("\n\nO maior valor recebido foi: %d", maiorValor);
	
	return 0;
}