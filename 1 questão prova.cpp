#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{	
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	int escolha;
	
	struct info_cliente
	{
		char nome[70];
		int tipo_de_quarto;
		char quarto[10];
		int tipo_de_pagamento;
		char pagamento[10];
	};
	
	struct info_cliente cliente;
	
	do {
		system("cls");
		printf("----------Cadastro de Cliente----------\n\n\n");
		
		printf("Digite o nome completo do cliente: ");
		fgets(cliente.nome, 70, stdin);
		
		printf("\n\nSelecione o tipo de quarto:\n 1 - Solteiro; 2 - Duplo; 3 - Triplo. Digite o respectivo valor: ");
		scanf("%d", &cliente.tipo_de_quarto);
		
		if (cliente.tipo_de_quarto == 1)
		{
			strcpy(cliente.quarto, "Solteiro");
		}
		if (cliente.tipo_de_quarto == 2)
		{
			strcpy(cliente.quarto, "Duplo");
		}
		if (cliente.tipo_de_quarto == 3)
		{
			strcpy(cliente.quarto, "Triplo");
		}
		if (cliente.tipo_de_quarto < 1) 
		{
			strcpy(cliente.quarto, "Invalido");
		}
		if (cliente.tipo_de_quarto > 3)
		{
			strcpy(cliente.quarto, "Invalido");
		}
		
		printf("\n\nSelecione o metodo de pagamento:\n 1 - Credito; 2 - Debito; 3 - Dinheiro. Digite o respectivo valor: ");
		scanf("%d", &cliente.tipo_de_pagamento);
		
		if (cliente.tipo_de_pagamento == 1)
		{
			strcpy(cliente.pagamento, "Credito");
		}
		if (cliente.tipo_de_pagamento == 2)
		{
			strcpy(cliente.pagamento, "Debito");
		}
		if (cliente.tipo_de_pagamento == 3)
		{
			strcpy(cliente.pagamento, "Dinheiro");
		}
		if (cliente.tipo_de_pagamento < 1)
		{
			strcpy(cliente.pagamento, "Invalido");
		}
		if (cliente.tipo_de_pagamento > 3)
		{
			strcpy(cliente.pagamento, "Invalido");
		}
		
		system("cls");
		
		printf("----------Informacoes do cliente----------\n\n\n");
		printf("Nome do cliente: %s", cliente.nome);
		printf("\nTipo de quarto selecionado: %s.", cliente.quarto);
		printf("\n\nMetodo de pagamento selecionado: %s.", cliente.pagamento);
		printf ("\n\nData da reserva: %02d/%02d/%04d, as %02d:%02d.", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min);
		
		
		printf("\n\n\nPara sair do programa de cadastramento, digite 0. Caso contrario, digite qualquer outro valor: ");
		scanf("%d", &escolha);
		printf("\n\n");
		
	} while (escolha != 0);
	
	return 0;
}
