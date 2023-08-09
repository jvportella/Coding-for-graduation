#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
	float dist;

	printf ("Digite o primeiro ponto de x: ");
	scanf ("%d", &x1);
	printf ("\nDigite o primeiro ponto de y: ");
	scanf ("%d", &y1);
	printf ("\nDigite o segundo ponto de x: ");
	scanf ("%d", &x2);
	printf ("\nDigite o segundo ponto de x: ");
	scanf ("%d", &y2);

	dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	printf ("\nA distancia entre os pontos eh %f", dist);



    return 0;
}
