#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	int opcao;
	int pedra, papel, tesoura, numaleatorio;
	int i = 1;
	
	pedra = 0;
	papel = 1;
	tesoura = 2;
	
	srand(time(NULL)); // funcao para que a aleatoriedade nao seja constante
	
	numaleatorio = rand() % 3;
	
	do
	{
		printf("\nO jogo selecionara um uma das 3 opcoes aleatoriamente e retornara o vencedor ao final!\n");
		printf("Escolha uma das seguintes opcoes: ");
		
		printf("\n\nPara jogar pedra, pressione 1");
		printf("\nPara jogar papel, pressione 2");
		printf("\nPara jogar tesoura, pressione 3\n\n");
		scanf("%d", &opcao);
		
		
		switch(opcao)
		{
			case 1 :
				if (opcao == 1 && numaleatorio == 0)
					printf("O programa jogou pedra e o resultado foi empate!");
					system("PAUSE");
					system("cls");
				if (opcao == 1 && numaleatorio == 1)
					printf("O programa jogou papel e venceu!");
					system("PAUSE");
					system("cls");
				if (opcao == 1 && numaleatorio == 2)
					printf("O programa jogou tesoura e voce venceu!");
					system("PAUSE");
					system("cls");
				break;
				
				
			case 2	:
				if (opcao == 2 && numaleatorio == 0)
					printf("O programa jogou pedra e voce venceu!");
					system("PAUSE");
					system("cls");
				if (opcao == 2 && numaleatorio == 1)
					printf("O programa jogou papel e o resultado foi empate!");
					system("PAUSE");
					system("cls");
				if (opcao == 2 && numaleatorio == 2)
					printf("O programa jogou tesoura e venceu!");
					system("PAUSE");
					system("cls");
				break;
				
				
			case 3 :
				if (opcao == 3 && numaleatorio == 0)
					printf("O programa jogou pedra e venceu!");		
					system("PAUSE");
					system("cls");
				if (opcao == 3 && numaleatorio == 1)
					printf("O programa jogou papel e voce venceu!");
					system("PAUSE");
					system("cls");
				if (opcao == 3 && numaleatorio == 2)
					printf("O programa jogou tesoura resultado foi empate!");
					system("PAUSE");
					system("cls");	
				break;
				
			default : // fechar o console caso a opcao selecionada seja inexistente
				system("cls");
				printf("Favor selecionar apenas dentre as 3 opcoes. Fechando aplicacao...\n");
				return 0;
				
				printf("1 para repetir e 2 para sair");
				scanf("%d", &i);
		}
	}while (i = 1);
	return 0;
}