#include <stdio.h>
#include <stdlib.h>

int main()
{
	char caractere[10]; // no codigo desenvolvido pelo programador, o vetor caractere nao possuia um valor definido, e isso
						// causara erros em sua execuçao
						//nao ha necessidade da criaçao de outra variavel como foi o caso da variavel "n" utilizada
						
	for(int i = 0; i < 10; i++) // ele iniciou o I como sendo 1 e nao 0, e isso fara com que o primeiro elemento do vetor
	{							// nao seja preenchido
		printf("Insira o caractere: ");
		scanf(" %c", &caractere[i]); // aqui ele erroneamente utilizou %s no lugar de %c, alem de ter esquecido de colocar o nome completo do vetor.
			
		printf("\nO caractere eh: %c\n\n", caractere[i]);	
	}						
	

	
	
	
	
	return 0;
}