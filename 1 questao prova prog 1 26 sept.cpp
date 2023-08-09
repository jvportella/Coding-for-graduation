#include <stdio.h>
#include <stdlib.h>


int main()
{
	float nota1, nota2, nota3;
	float mediaproveitamento, mediaproveitamento2;
	float notasubstituta;
	
	
	printf("Digite a primeira nota do aluno: ");
	scanf(" %f", &nota1);
	
	printf("\nDigite a segunda nota do aluno: ");
	scanf(" %f", &nota2);
	
	printf("\nDigite a terceira nota do aluno: ");
	scanf(" %f", &nota3);
	
	
	mediaproveitamento = (((nota1*2) + nota2 + (nota3*2))/ 5);
	
	
	if (mediaproveitamento >= 9 && mediaproveitamento <= 10)
	{
		printf("\nO aluno foi aprovado com nota %.1f e conceito A.\n", mediaproveitamento);
		printf("\nNota da primeira avaliacao: %.1f", nota1);	
		printf("\nNota da segunda avaliacao: %.1f", nota2);
		printf("\nNota da terceira avaliacao: %.1f\n", nota3);
	}
	
	
	
	
	
		
	if (mediaproveitamento < 9 && mediaproveitamento >= 7.5)
	{
		printf("\nO aluno foi aprovado com nota %.1f e conceito B.\n", mediaproveitamento);
		printf("\nNota da primeira avaliacao: %.1f", nota1);	
		printf("\nNota da segunda avaliacao: %.1f", nota2);
		printf("\nNota da terceira avaliacao: %.1f\n", nota3);
	}
	
	
	
	
	
	// em caso de C	
	if (mediaproveitamento < 7.5 && mediaproveitamento >= 6)
	{
		printf("\nO conceito final do aluno foi C, com nota %.1f.\n", mediaproveitamento);
		printf("\nNota da primeira avaliacao: %.1f", nota1);	
		printf("\nNota da segunda avaliacao: %.1f", nota2);
		printf("\nNota da terceira avaliacao: %.1f\n\n", nota3);
		printf("Digite a nota da prova substituta da segunda avaliacao: ");
		scanf(" %f", &notasubstituta);
		
		mediaproveitamento2 = (((nota1*2) + notasubstituta + (nota3*2))/ 5);
		
		
		if (mediaproveitamento2 >= 9 && mediaproveitamento2 <= 10)
		{
			printf("\nO aluno foi aprovado com nota %.1f e conceito A.\n", mediaproveitamento2);
			printf("\nNota da primeira avaliacao: %.1f", nota1);	
			printf("\nNota da segunda avaliacao: %.1f", notasubstituta);
			printf("\nNota da terceira avaliacao: %.1f\n", nota3);
			return 0;
		}
		
		
		if (mediaproveitamento2 >= 7.5 && mediaproveitamento2 < 9)
		{
			printf("\nO aluno foi aprovado com nota %.1f e conceito B.\n", mediaproveitamento2);
			printf("\nNota da primeira avaliacao: %.1f", nota1);	
			printf("\nNota da segunda avaliacao: %.1f", notasubstituta);
			printf("\nNota da terceira avaliacao: %.1f\n", nota3);
			return 0;
		}
		
		
		if (mediaproveitamento2 < 7.5 && mediaproveitamento2 >= 6)
		{
			printf("\nO aluno foi reprovado com nota %.1f e conceito C.\n", mediaproveitamento2);
			printf("\nNota da primeira avaliacao: %.1f", nota1);	
			printf("\nNota da segunda avaliacao: %.1f", notasubstituta);
			printf("\nNota da terceira avaliacao: %.1f\n", nota3);		
			return 0;
		}
		
		
		if (mediaproveitamento2 < 6 && mediaproveitamento2 >= 4)
		{
			printf("\nO aluno foi reprovado com nota %.1f e conceito D.\n", mediaproveitamento2);
			printf("\nNota da primeira avaliacao: %.1f", nota1);	
			printf("\nNota da segunda avaliacao: %.1f", notasubstituta);
			printf("\nNota da terceira avaliacao: %.1f\n", nota3);
			return 0;		
		}
		
		
		if (mediaproveitamento2 < 4 && mediaproveitamento2 >= 0)
		{
			printf("\nO aluno foi reprovado com nota %.1f e conceito E.\n", mediaproveitamento2);
			printf("\nNota da primeira avaliacao: %.1f", nota1);	
			printf("\nNota da segunda avaliacao: %.1f", notasubstituta);
			printf("\nNota da terceira avaliacao: %.1f\n", nota3);
			return 0;		
		}
		
    }		
	
	
	
	
	
	// em caso de D
	if (mediaproveitamento < 6 && mediaproveitamento >= 4)
	{
		printf("\nO conceito final do aluno foi D, com nota %.1f.\n", mediaproveitamento);
		printf("\nNota da primeira avaliacao: %.1f", nota1);	
		printf("\nNota da segunda avaliacao: %.1f", nota2);
		printf("\nNota da terceira avaliacao: %.1f\n\n", nota3);
		printf("Digite a nota da prova substituta da segunda avaliacao: ");
		scanf(" %f", &notasubstituta);
		
		mediaproveitamento2 = (((nota1*2) + notasubstituta + (nota3*2))/ 5);
		
		
		if (mediaproveitamento2 >= 9 && mediaproveitamento2 <= 10)
		{
			printf("\nO aluno foi aprovado com nota %.1f e conceito A.\n", mediaproveitamento2);
			printf("\nNota da primeira avaliacao: %.1f", nota1);	
			printf("\nNota da segunda avaliacao: %.1f", notasubstituta);
			printf("\nNota da terceira avaliacao: %.1f\n", nota3);
			return 0;
		}
		
		
		if (mediaproveitamento2 >= 7.5 && mediaproveitamento2 < 9)
		{
			printf("\nO aluno foi aprovado com nota %.1f e conceito B.\n", mediaproveitamento2);
			printf("\nNota da primeira avaliacao: %.1f", nota1);	
			printf("\nNota da segunda avaliacao: %.1f", notasubstituta);
			printf("\nNota da terceira avaliacao: %.1f\n", nota3);
			return 0;
		}
		
		
		if (mediaproveitamento2 < 7.5 && mediaproveitamento2 >= 6)
		{
			printf("\nO aluno foi reprovado com nota %.1f e conceito C.\n", mediaproveitamento2);
			printf("\nNota da primeira avaliacao: %.1f", nota1);	
			printf("\nNota da segunda avaliacao: %.1f", notasubstituta);
			printf("\nNota da terceira avaliacao: %.1f\n", nota3);
			return 0;		
		}
		
		
		if (mediaproveitamento2 < 6 && mediaproveitamento2 >= 4)
		{
			printf("\nO aluno foi reprovado com nota %.1f e conceito D.\n", mediaproveitamento2);
			printf("\nNota da primeira avaliacao: %.1f", nota1);	
			printf("\nNota da segunda avaliacao: %.1f", notasubstituta);
			printf("\nNota da terceira avaliacao: %.1f\n", nota3);	
			return 0;	
		}
		
		
		if (mediaproveitamento2 < 4 && mediaproveitamento2 >= 0)
		{
			printf("\nO aluno foi reprovado com nota %.1f e conceito E.\n", mediaproveitamento2);
			printf("\nNota da primeira avaliacao: %.1f", nota1);	
			printf("\nNota da segunda avaliacao: %.1f", notasubstituta);
			printf("\nNota da terceira avaliacao: %.1f\n", nota3);
			return 0;		
		}
    }	
	
	
	
	
	
	// em caso de E	
	if (mediaproveitamento < 4 && mediaproveitamento >= 0)
	{
		printf("\nO conceito final do aluno foi E, com nota %.1f.\n", mediaproveitamento);
		printf("\nNota da primeira avaliacao: %.1f", nota1);	
		printf("\nNota da segunda avaliacao: %.1f", nota2);
		printf("\nNota da terceira avaliacao: %.1f\n\n", nota3);
		printf("Digite a nota da prova substituta da segunda avaliacao: ");
		scanf(" %f", &notasubstituta);
		
		mediaproveitamento2 = (((nota1*2) + notasubstituta + (nota3*2))/ 5);
		
		
		if (mediaproveitamento2 >= 9 && mediaproveitamento2 <= 10)
		{
			printf("\nO aluno foi aprovado com nota %.1f e conceito A.\n", mediaproveitamento2);
			printf("\nNota da primeira avaliacao: %.1f", nota1);	
			printf("\nNota da segunda avaliacao: %.1f", notasubstituta);
			printf("\nNota da terceira avaliacao: %.1f\n", nota3);
			return 0;
		}
		
		
		if (mediaproveitamento2 >= 7.5 && mediaproveitamento2 < 9)
		{
			printf("\nO aluno foi aprovado com nota %.1f e conceito B.\n", mediaproveitamento2);
			printf("\nNota da primeira avaliacao: %.1f", nota1);	
			printf("\nNota da segunda avaliacao: %.1f", notasubstituta);
			printf("\nNota da terceira avaliacao: %.1f\n", nota3);
			return 0;
		}
		
		
		if (mediaproveitamento2 < 7.5 && mediaproveitamento2 >= 6)
		{
			printf("\nO aluno foi reprovado com nota %.1f e conceito C.\n", mediaproveitamento2);
			printf("\nNota da primeira avaliacao: %.1f", nota1);	
			printf("\nNota da segunda avaliacao: %.1f", notasubstituta);
			printf("\nNota da terceira avaliacao: %.1f\n", nota3);	
			return 0;	
		}
		
		
		if (mediaproveitamento2 < 6 && mediaproveitamento2 >= 4)
		{
			printf("\nO aluno foi reprovado com nota %.1f e conceito D.\n", mediaproveitamento2);
			printf("\nNota da primeira avaliacao: %.1f", nota1);	
			printf("\nNota da segunda avaliacao: %.1f", notasubstituta);
			printf("\nNota da terceira avaliacao: %.1f\n", nota3);	
			return 0;	
		}
		
		
		
		if (mediaproveitamento2 < 4 && mediaproveitamento2 >= 0)
		{
			printf("\nO aluno foi reprovado com nota %.1f e conceito E.\n", mediaproveitamento2);
			printf("\nNota da primeira avaliacao: %.1f", nota1);	
			printf("\nNota da segunda avaliacao: %.1f", notasubstituta);
			printf("\nNota da terceira avaliacao: %.1f\n", nota3);	
			return 0;	
		}
    }	
		
	
	
	
	
		
	if (mediaproveitamento > 10){
		return 0; }	
	
	if (mediaproveitamento < 0){
		return 0; }	
		
	
	return 0;
}