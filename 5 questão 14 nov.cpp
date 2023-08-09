#include <stdio.h>

int main()
{
	int valor;
	unsigned int valorconvertido;
	
//	valor = -1;
//	valor = -1000;
//	valor = -1996;
	valor = -380000;
	
	valorconvertido = valor;
	
	printf("%u", valorconvertido);
} // o valor negativo é convertido para o máximo valor possível em 4 bits (unsigned int), independentemente
  // do valor com sinal negativo.
