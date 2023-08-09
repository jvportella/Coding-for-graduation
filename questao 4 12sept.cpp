#include <stdio.h>

int main()
{
	float valor1, valor2, valor3;
	int max, med, min;
	
	
	printf("Digite 3 valores: ");
	scanf("%f %f %f", &valor1, &valor2, &valor3);
	
		
	if (valor1 > valor2 && valor1 > valor3)
	{
		max = valor1;
    }	
	
	if (valor1 > valor2 && valor1 < valor3)		
	{
		max = valor3;
		med = valor1;
		min = valor2;
	}
		
	if (valor1 < valor2 && valor1 > valor3)
	{
		max = valor2;
		med = valor1;
		min = valor3;
	}
	
	if (valor1 < valor2 && valor1 < valor3)
	{
		min = valor2;	
    }	
	
	
	
	
	if (valor2 > valor1 && valor2 > valor3)
	{
		max = valor2;
    }	
		
	if (valor2 > valor1 && valor2 < valor3)
	{
		max = valor3;
		med = valor2;
		min = valor1;
	}
			
	if (valor2 < valor1 && valor2 > valor3)
	{
		max = valor1;			
		med = valor2;
		min = valor3;
	}
			
	if (valor2 < valor1 && valor2 < valor3)
	{
		min = valor2;
    }	
	    
	    
	    

	if (valor3 > valor1 && valor3 > valor2)
	{
		max = valor3;
    }	
		
	if (valor3 > valor1 && valor3 < valor2)
	{
		max = valor2;
		med = valor3;
		min = valor1;
	}
			
	if (valor3 < valor1 && valor3 > valor2)
	{
		max = valor1;
		med = valor3;
		min = valor2;
	}
				
	if(valor3 < valor1 && valor3 < valor2)
	{
		min = valor3;
    }	
		
		
		
		
	//if (max == med || max == min || med == min)//ajeitar essa parte
	{
		printf("Favor nao digitar numeros iguais ou caracteres. Fechando aplicacao.");
		return 0;
    }	
		
		
	
	
	printf("\nO menor valor eh: %d \nO valor medio eh: %d \nO maior valor eh %d", min, med, max);
	
	return 0;
}