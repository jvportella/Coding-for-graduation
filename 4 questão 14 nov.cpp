#include <stdio.h>
#include <string.h>
#include <conio.h>

void funcao()
{
	int valor, resultado;
	char letra;
	char palavra[8];
	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	resultado = valor * valor;
	printf("%d", resultado);
	
	
	printf("\nAgora digite uma palavra de no maximo 8 letras: ");
	scanf("%s", &palavra[8]);
	
	printf("\nA palavra ao contrario fica: %s", strrev(palavra));
}
	
//	printf("\nAgora digite um caractere: ");
//	scanf("% c", &letra);
//	
//	if (letra >= 65 && letra <= 90)
//	{
//		letra = letra + 32;
//		printf("%c", letra);
//	}			
//}

int main()
{
//	printf("%d",funcao());
	funcao();
	
	return 0;
}
