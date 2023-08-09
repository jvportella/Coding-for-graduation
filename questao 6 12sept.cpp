#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	//criando todas as variaveis que vou precisar e utilizando um array para imbutir os 6 valores dos produtos 
   // em um unico nome, alem da variavel ''opcao'' para selecionar as opçoes no switch
	int qtdprod, opcao;
	float valortotal;
	float valorunid[6] = {98.52, 142.90, 147.90, 137.90, 282.90, 799.0};

	//tabela de produtos
	printf("Escolha um dentre os seguintes vinhos para compra: \n");
	
	printf("\nSan Marzano II Pumo Negroamaro Salento 750ML (valor em real - 98,52 a unidade)\n");
	printf("Pressione 1 para selecionar o produto acima.\n");
	
	printf("\nPatrick Clerget Coteaux Bourguignons 750ML (valor em real - 147,90 a unidade)\n");
	printf("Pressione 2 para selecionar o produto acima.\n");
	
	printf("\nTerra Mazzei 750ML (valor em real - 142,90 a unidade)\n");
	printf("Pressione 3 para selecionar o produto acima.\n");
	
	printf("\nPizzorno Don Prospero Tannat Malbec 750ML (valor em real - 137,90 a unidade)\n");
	printf("Pressione 4 para selecionar o produto acima.\n");
	
	printf("\nColli di Luni Vermentino Bianco Vigna Del Prefetto 750ML (valor em real - 282,90 a unidade)\n");
	printf("Pressione 5 para selecionar o produto acima.\n");
	
	printf("\nCabernet Sauvignon Malbec Mendoza 750ML (valor em real - 799,00 a unidade)\n");
	printf("Pressione 6 para selecionar o produto acima.\n\n");
	scanf("%d", &opcao);
	
	
	switch(opcao)
	{	
		case 1 :	
		system("cls"); // comando clear utilizado para facilitar a visualizaçao no console	
		printf("Agora, digite a quantidade que voce deseja comprar: ");
		scanf("%d", &qtdprod);	
		
		valortotal = valorunid[0]*qtdprod; // o valor total é o valor de cada produto multiplicado pela quantidade 
										  // que o usuario deseja
		break;
		
		case 2:
		system("cls");
	    printf("Agora, digite a quantidade que voce deseja comprar: ");
		scanf("%d", &qtdprod);	
		
		valortotal = valorunid[1]*qtdprod;
		break;
		
		case 3 :
		system("cls");
	    printf("Agora, digite a quantidade que voce deseja comprar: ");
	    scanf("%d", &qtdprod);
	    
		valortotal = valorunid[2]*qtdprod;
		break;
		
		case 4 :
		system("cls");
		printf("Agora, digite a quantidade que voce deseja comprar: ");
		scanf("%d", &qtdprod);
		
		valortotal = valorunid[3]*qtdprod;
		break;
	
		case 5 :
		system("cls");	
		printf("Agora, digite a quantidade que voce deseja comprar: ");
		scanf("%d", &qtdprod);
		
		valortotal = valorunid[4]*qtdprod;
		break;
	
		case 6 :
		system("cls");	
		printf("Agora, digite a quantidade que voce deseja comprar: ");
		scanf("%d", &qtdprod);
		
		valortotal = valorunid[5]*qtdprod;
		break;
	
		default : //no caso de uma opçao fora do conjunto ser selecionada, o programa fechará
		system("cls");	
        printf("Por favor, selecione apenas dentre as opcoes dentre 1 e 6.\n");
        return 1;
	}
	
	system("cls"); // comando clear pra facilitar a visualizaçao
	printf("O valor total de sua compra foi %.2f reais. Obrigado por comprar conosco!\n\n", valortotal);
	system("pause"); // comando pause para facilitar a visualizaçao
	system("cls");
	
	
	return 0;
}