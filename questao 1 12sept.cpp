#include <stdio.h>
#include <stdlib.h>

int main()
{	
	//definindo as variaveis para imprimir para o usuario e para os calculos
	float velocmed, tempogasto, qtdlit, velocms, distancia;
	
	//coleta de informacoes
	printf("Digite a velocidade media ao longo do percurso (em km/h): ");
	scanf ("%f", &velocmed);
	
	printf("Digite quanto tempo foi gasto na viagem (em horas): ");
	scanf ("%f", &tempogasto);
	
	//calculos que serao utilizados na hora de imprimir para o usuario
	velocms = (velocmed/3.6);
	distancia = velocmed*tempogasto;
	qtdlit = (distancia/12);
	
	
	//etapa da impressao
	printf("\nA sua velocidade media foi de %.1f km/h (%.1f m/s).", velocmed, velocms);
	
	
	//a funcao if esta sendo utilizada aqui para que caso o valor em horas seja 1, o processo retornará "hora", no singular,
	//e caso o tempo esteja entre 0 e 1 ou for maior que 2, o processo imprima "horas", no plural
	if(tempogasto >= 2 && tempogasto < 1)
	{
		printf("\n\nO tempo total gasto na viagem foi de %.1f horas.", tempogasto);		
	}
	
	if(tempogasto >= 1  && tempogasto < 2)
	{
		printf("\n\nO tempo total gasto na viagem foi de %.1f hora.", tempogasto);
	}
	else
	{
		printf("\n\nO tempo total gasto na viagem foi de %.1f horas.", tempogasto);
	}
	
	
	printf("\n\nA distancia total percorrida foi %.1f km.", distancia);
	
	//aqui exatamente o mesmo processo que foi anteriormente utilizado, com a intencao de que a escrita seja congruente ao valor mostrado
	if(tempogasto >= 2 && tempogasto < 1)
	{
	   	printf("\n\nA quantidade de litros de gasolina utilizada na viagem foi %.1f litros.\n\n", qtdlit);	
	}
	
	if(tempogasto == 1  && tempogasto < 2)
	{
	   	printf("\n\nA quantidade de litros de gasolina utilizada na viagem foi %.1f litro.\n\n", qtdlit);
	}
	else
	{
		printf("\n\nA quantidade de litros de gasolina utilizada na viagem foi %.1f litros.\n\n", qtdlit);
	}
	
	
	//funcao para que a leitura dos dados impressos seja mais facil, pausando o console
	system("PAUSE");
	
	
	return 0;
}
