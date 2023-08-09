#include <stdio.h>
#include <malloc.h>
# define TAM 10
void addinicio();
void removinicio();
void addfinal();
void removfinal();
void mostrar();
int fechar();
int lista[TAM];
int Topo = - 1;
int Cauda = - 1;

int main()
{
    int escolha;
    do
    {
        printf("\n1.ADICIONAR ITEM AO FIM DA LISTA\n");
        printf("2.REMOVER ITEM DO INICIO DA LISTA\n");
        printf("3.ADICIONAR ITEM AO INICIO DA LISTA\n");
        printf("4.REMOVER ITEM DO FINAL DA LISTA - CORRIGIR\n");
        printf("5.MOSTRAR\n");
        printf("6.SAIR\n");
        printf("SELECIONE SUA OPCAO: ");
        scanf("%d", &escolha);
        
        switch (escolha)
        {
            case 1:
            	addfinal();
            	break;
            case 2:
            	removinicio();
            	break;
            case 3:
				addinicio();
				break;
			case 4:
				removfinal();
				break;		
            case 5:
            	mostrar();
            	break;
            case 6:
            	fechar();
            	break;
            default:
            printf("\nOpcao invallida.\n");
        } 
    }while (escolha != 6);
} 
 
void addfinal()
{
    int inserir_item; 
    if (Cauda == TAM - 1)
       printf("LISTA CHEIA! \n");
    else
    {
        if (Topo == - 1)
      
        Topo = 0;
        printf("Elemento a ser inserido no final da lista: ");
        scanf("%d", &inserir_item);
        Cauda = Cauda + 1;
        lista[Cauda] = inserir_item;
    }
} 
 
void removinicio()
{
    if (Topo == - 1 || Topo > Cauda)
    {
        printf("LISTA VAZIA! \n");
        return ;
    }
    else
    {
        printf("Elemento a ser removido do inicio da lista: %d\n", lista[Topo]);
        Topo = Topo + 1;
    }
} 

void addinicio()
{
	int inserir_item; 
	if(Topo == TAM - 1)
		{
			printf("LISTA CHEIA! \n");
		}
		else 
		{
			if (Topo == - 1)
			{
	        	Topo = 0;
	    	}	
	    	
	        printf("Elemento a ser inserido no inicio da lista: ");
	        scanf("%d", &inserir_item);
	        lista[Topo] = Topo + 1;
	        Topo = inserir_item;
		}
}

void removfinal()
{
	if(Topo == -1)
		printf("LISTA VAZIA! \n");
	else
	{
		printf("Item a ser removido do final da lista: %d\n", lista[Cauda]);
		//lista[Cauda] = ;
	}
}
 
void mostrar()
{
    
    if (Topo == - 1)
        printf("LISTA VAZIA! \n");
    else
    {
        printf("\nLISTA: \n");
        for (int i = Topo; i <= Cauda; i++)
            printf("%d ", lista[i]);
        printf("\n");
    }
}

int fechar()
{
	return 0;
} 
