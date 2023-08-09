#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	int opcao; //opçao que sera utilizada na funçao switch
	int pedra, papel, tesoura, numaleatorio; //variaveis que assumirão valores para que o embate funcione
	
	pedra = 0; //valor que pedra assumirá e que pode ser selecionado pela funçao RAND aleatoriamente
	papel = 1; //valor que papel assumirá e que pode ser selecionado pela funçao RAND aleatoriamente
	tesoura = 2; //valor que tesoura assumirá e que pode ser selecionado pela funçao RAND aleatoriamente
	
	srand(time(NULL)); // funcao para que a aleatoriedade nao seja "constante"
	
	numaleatorio = rand() % 3; //limite de rand em 3, para que ele gere valores aleatorios entre 0 e 2,
	                          // os mesmos valores assumidos por pedra, papel e tesoura respectivamente
	
	printf("O jogo selecionara um uma das 3 opcoes aleatoriamente e retornara o vencedor ao final!\n");
	printf("Escolha uma das seguintes opcoes: "); //explicaçao do jogo ao usuario
	
	printf("\n\nPara jogar pedra, pressione 1"); // interface para o switch
	printf("\nPara jogar papel, pressione 2");
	printf("\nPara jogar tesoura, pressione 3\n\n");
	scanf("%d", &opcao);
	
	
	switch(opcao)
	{
		case 1 : // possibilidades entre os jogos caso o usuario decida jogar pedra
			if (opcao == 1 && numaleatorio == 0)
				printf("O programa jogou pedra e o resultado foi empate!");
			if (opcao == 1 && numaleatorio == 1)
				printf("O programa jogou papel e venceu!");
			if (opcao == 1 && numaleatorio == 2)
				printf("O programa jogou tesoura e voce venceu!");
			break;
			
			
		case 2 : // possibilidades entre os jogos caso o usuario decida jogar papel
			if (opcao == 2 && numaleatorio == 0)
				printf("O programa jogou pedra e voce venceu!");
			if (opcao == 2 && numaleatorio == 1)
				printf("O programa jogou papel e o resultado foi empate!");
			if (opcao == 2 && numaleatorio == 2)
				printf("O programa jogou tesoura e venceu!");
			break;
			
			
		case 3 : // possibilidades entre os jogos caso o usuario decida jogar tesoura
			if (opcao == 3 && numaleatorio == 0)
				printf("O programa jogou pedra e venceu!");
			if (opcao == 3 && numaleatorio == 1)
				printf("O programa jogou papel e voce venceu!");
			if (opcao == 3 && numaleatorio == 2)
				printf("O programa jogou tesoura resultado foi empate!");	
			break;
			
		default : // fechar o console caso a opcao selecionada seja inexistente
			system("cls");
			printf("Favor selecionar apenas dentre as 3 opcoes. Fechando aplicacao...\n");
			return 0;
	}
	
	return 0;
}