#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor[100];
    int maiorvalor = 0;

    for (int i = 0; i < 100; i++)
    {
    	printf("Se desejar sair do loop e ver o maior valor, basta digitar -4444\n");
        printf("Digite um valor qualquer quantas vezes desejar (maximo de 100): \n");
        scanf("%d", &valor[i]);

        maiorvalor = valor[0];

        if(valor[i] > maiorvalor)
        {
            maiorvalor = valor[i];
        }
        
        if (valor[i] == -4444)
		{
			break;
		}

    }

    system("cls");
    printf("O maior valor digitado foi %d.\n\n", maiorvalor);

    return 0;
}