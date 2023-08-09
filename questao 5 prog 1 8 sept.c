#include <stdlib.h>
#include <stdio.h>

int main()
{
    float numero1, numero2;
	float subtr, diffquad;

	printf ("Digite o primeiro valor: ");
	scanf ("%f", &numero1);
	printf ("Digite o segundo valor: ");
	scanf ("%f", &numero2);

	subtr = (numero1 - numero2)*(numero1 - numero2);
	diffquad = (numero1*numero1) - (numero2*numero2);

	printf ("\nO quadrado da diferenca do primeiro valor para o segundo eh %f", subtr);
	printf ("\nA diferenca do quadrado dos dois valores eh %f", diffquad);




    return 0;
}
