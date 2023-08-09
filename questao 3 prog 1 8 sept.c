#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float l1;
	float perim, area, diag;

	printf("Digite o valor do lado do quadrado em metros: ");
	scanf("%f", &l1);

    perim = (l1*4);
	area = pow(l1, 2);
	diag = (l1*sqrt(2));

	printf("O perimetro do quadrado eh: %f", perim);
	printf("\nA area do quadrado eh: %f", area);
	printf("\nA diagonal do quadrado equivale a: %f", diag);


    return 0;
}

