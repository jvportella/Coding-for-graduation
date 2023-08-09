#include <stdio.h>
#include <conio.h>

int main()
{
	struct compromisso
	{
		char hora[14];
		char data[14];
		char descricao[101];
	};
	
	struct compromisso agenda;
	
	printf("Digite o horario exato do lembrete (formato xx:xx:xx): ");
	scanf("%s", &agenda.hora);
	
	printf("\n");
	
	printf("Digite a data do lembrete (formato xx/xx/xxxx): ");
	scanf("%s", &agenda.data);
	
	printf("\n");
	
	printf("Agora descreva o compromisso em um pequeno texto: ");
	scanf("%s", agenda.descricao);
	
	printf("\n");
	
	printf("--------Lembrete de compromisso criado--------");
	printf("\n\n\nDescricao do compromisso: %s, as %s horas do dia %s", agenda.descricao, agenda.hora, agenda.data);
	
	return 0;
}
