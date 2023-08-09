#include <stdio.h>
#include <math.h>

enum tipo_numero {LONG, DOUBLE};

typedef union
{
	long l_valor;
	double d_valor;
} valor_numero;

//int le_numero()
//{	
//	valor_numero valor;
//	
//	int num = 0;
//	int aux;
//	
//	printf("Digite o valor: ");
//	scanf("%Lf", &num);
//	
//	valor.l_valor = num;
//	
//	if (valor.l_valor % 2 = 0)
//	{
//		printf("\nTipo de variavel para valor recebido: long.\n");
//	}
//	else
//	{
//		printf("Tipo de variavel para valor recebido: double.\n");
//	}
//}

float somar (float num1, float num2)
{
	return num1 + num2;
}

float subtrair (float num1, float num2)
{
	return num1 - num2;
}

float multiplicar(float num1, float num2)
{
	return num1 * num2;
}

float dividir (float num1, float num2)
{
	return num1 / num2;
}


int main()
{
//	le_numero();
	
	int valor1 = 0;
	int valor2 = 0;
	char escolha;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor1);
	
	printf("\nDigite o segundo valor: ");
	scanf("%f", &valor2);
	
	printf ("\nAgora selecione a operacao que deseja realizar entre os dois: +  -  *  /  ou F\t");
	scanf("% c", &escolha);
	
	switch(escolha)
	{
		case '+':
			
			somar(valor1, valor2); 
			break;
		
		case '-':
		
			subtrair(valor1, valor2);
			break;
		
		
		case '*':
			
			subtrair(valor1, valor2);
			break;
			
		case '/':
		
			subtrair(valor1, valor2);
			break;
		
		
		case 'F':
		
			return 0;	
		
		
		case 'f':
		
			return 0;	
		
		
		default:
			printf("\nOpcao invalida.\n");			
	}
	
	return 0;
}
