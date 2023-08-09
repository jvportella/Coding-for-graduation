#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
    float area, perimetro, raio;
	float pi = 3.14;

	printf ("Digite o raio da circunferencia em metros: ");
	scanf ("%f", &raio);

	area = (pow(raio, 2)*pi);
	perimetro = (2*pi)*raio;


	printf ("\nConsiderando Pi como 3.14, a area de sua circunferencia eh %.2f metros", area);
	printf ("\nConsiderando Pi como 3.14, seu perimetro eh %.2f metros", perimetro);




	return 0;
}
