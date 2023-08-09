#include <stdio.h>

typedef union
{
	float f;
	double d;
	long double x;
	
} pontoFlutuante;


int main()
{
	pontoFlutuante pontoflutuante;
	
	pontoflutuante.f = 3.22;
	printf("Float: %.3f\n", pontoflutuante.f);
	printf("Double: %lf\n", pontoflutuante.f);
	printf("Long double: %Lf\n\n", pontoflutuante.f);
	
	
	pontoflutuante.d = 6.44;
	printf("Float: %.3f\n", pontoflutuante.d);
	printf("Double: %lf\n", pontoflutuante.d);
	printf("Long double: %Lf\n\n", pontoflutuante.d); 
	
	
	pontoflutuante.x = 12.88;
	printf("Float: %.3f\n", pontoflutuante.x);
	printf("Double: %lf\n", pontoflutuante.x);
	printf("Long double: %Lf\n\n", pontoflutuante.x); 
	
	
	
	
	return 0;
}
