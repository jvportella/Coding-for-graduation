#include <stdio.h>
#include <conio.h>

int main()
{
	struct infoaluno //[5]
	{
		char nome[40];//[5];
		int matricula;//[5];
		char curso[40];//[5];	
	};
	
	struct infoaluno aluno;
//	for (int i = 0; aluno.nome[30][i] < 5; i++)	
//	{	
		printf("Digite o nome do aluno: ");
		fgets(aluno.nome, 40, stdin);
		
		printf("\n\nDigite o curso do aluno: ");
		fgets(aluno.curso, 40, stdin);
		
		printf("\n\nDigite o numero de matricula do aluno: ");
		scanf("%d", &aluno.matricula);
//	}

	printf("\n\n\nAluno %s, de numero de matricula %d, esta cursando %s.\n", aluno.nome, aluno.matricula, aluno.curso);	
	
	return 0;
}
