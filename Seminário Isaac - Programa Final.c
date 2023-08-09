#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>


typedef struct no 
{
    char valor[30];
    struct no *proximo;
} No; // criacao da nossa struct e typedef para facilitar a legibilidade do codigo.


void addinicio(No **lista, char *num) // o ponteiro duplo "lista" aponta para o ponteiro que aponta para o primeiro no da lista.
{
    No *novo = malloc(sizeof(No)); // utilizacao do novo tipo (typedef) para criar um novo no e alocar espaco na memoria para ele.
    
    if (novo) // enquanto novo for diferente de NULL, o codigo vai continuar para adicionar o novo no na lista.
    {
        strcpy(novo->valor, num); // o valor da string digitada pelo usuario eh copiada para a variavel valor do nosso novo no.
        novo -> proximo = *lista; // faz com que o novo no agora aponte para o primeiro no da lista, ou seja, torne-se o primeiro.
        *lista = novo; // o ponteiro do novo no agora aponta para o primeiro no original, ou seja, agora ele eh o primeiro. 
    }
    else // caso o novo no retorne NULL, houve erro ao reservar a memoria para o novo no, entao o codigo retorna a mensagem de erro.
    {
        printf ("Nao foi possivel adicionar o item - erro ao alocar a memoria.\n");
    }
}


void addfinal(No **lista, char *num) // mesmo procedimento do addinicio, sem o ptr para ptr o programa ficaria perdido.
{
    No *aux, *novo = malloc(sizeof(No)); // mesmo processo, porem dessa vez com um ptr aux pra evitar que a lista seja esvaziada.
    
    if (novo) // no caso de o novo no a ser add no final for diferente de NULL (sucesso ao alocar a memoria)
    {
        strcpy(novo->valor, num); // copia do valor passado no argumento para o valor do novo no.
        novo -> proximo = NULL; // agora o ptr "proximo" do novo no aponta para NULL porque ele eh o ultimo no da lista.
        
        if (*lista == NULL) // caso a lista esteja vazia:
        {
            *lista = novo; // procedimento para criar um novo no caso a lista esteja vazia.
        }
        else // caso nao esteja vazia, a funcao vai percorrer a lista ate o ultimo no.
        {
            aux = *lista; // copia identica dos valores de *lista para aux.
            while(aux -> proximo) // enquanto o ptr proximo for diferente de NULL
            {
                aux = aux -> proximo; // metodo para percorrer a lista ate que o ptr proximo seja NULL
            }
            aux -> proximo = novo; // agora o ptr proximo que antes apontava para NULL aponta para o novo no e o novo no aponta para NULL
        }
    }
    else // no caso de nao ser possivel reservar a memoria, o programa exibe uma mensagem de erro
        printf("Nao foi possivel adicionar o item - erro ao alocar memoria.\n"); 
} 

No* remover(No **lista, char *num) //mesmo processo
{
    No *aux, *remover = NULL; // ponteiro que vai atualizar de valorAtual para NULL
    
    if(*lista) // a funcao so vai rodar se a lista nao estiver vazia / for diferente de NULL
    {
        if(strcmp((*lista)->valor, num) == 0) // caso o primeiro valor da lista seja o que se deseja remover
        {
            remover = *lista; // agora o ponteiro de "remover" aponta para o primeiro no da lista
            *lista = remover -> proximo; // "remover" (tornar NULL) eh implementado ao primeiro no, e agora *lista (ponteiro original) aponta para o antigo segundo no.
        }
        else
        {
            aux = *lista; // copia o valor da lista para o ptr auxiliar para evitar perda de valores
            while (aux -> proximo && strcmp(aux -> proximo -> valor, num) != 0) // percorre a lista enquanto "num" nao for encontrado
            {
                aux = aux -> proximo; // metodo para percorrer a lista sem perder seus valores originais
            }
            if (aux -> proximo) // quando "num" for encontrado na lista
            {
                remover = aux -> proximo; // agora o ptr "remover" aponta para o mesmo no que "num"
                aux -> proximo = remover -> proximo; // faz com que ponteiro anterior aponte para o no posterior ao valor a ser removido
            }
        }
    }
    return remover; // a funcao retorna o ptr remover que aponta para o no removido ou NULL se ele nao for encontrado
} 


void atualizarItem(No *lista) 
{
    No *noAtual = lista; // variavel noAtual inicializada com o primeiro elemento da lista
    
    char valorAntigo[30], valorNovo[30];
    
    printf("\nDigite o item a ser atualizado na lista: "); 
    
    
    fflush(stdin); // funcao para evitar problemas com buffer de entrada (teclado)
	fgets(valorAntigo, 30, stdin);
	valorAntigo[strcspn(valorAntigo, "\n")] = '\0'; // codigo para evitar quebra de linha automatica do fgets
    
    printf("Digite o novo valor para o item: ");
    
    fflush(stdin); // funcao para evitar problemas com buffer de entrada (teclado)
	fgets(valorNovo, 30, stdin);
	valorNovo[strcspn(valorNovo, "\n")] = '\0'; // codigo para evitar quebra de linha automatica do fgets
    
    printf("\n");

    while (noAtual != NULL) // metodo para percorrer a lista ate encontrar valorAntigo
	{
        if (strcmp(noAtual->valor, valorAntigo) == 0) // vai percorrer a lista ate que noAtual seja igual a valorAntigo
		{
            strcpy(noAtual->valor, valorNovo); // utilizando stringcopy, copiamos o valor que o usuario desejar atualizar para o nosso noAtual
            break;
        }
        noAtual = noAtual->proximo; // agora noAtual (com valor igual ao valorNovo) aponta para o proximo elemento da lista
    }
    
	if (noAtual == NULL) // no caso de o valor especificado nao se encontrar na lista
	{
        printf("O item a ser atualizado nao se encontra na lista.\n\n");
    }
}


void mostrar(No *no) // recebe como parametro um ponteiro que vai apontar para um no 
{
	int contador = 1;
	printf("\n*  Doencas transmissiveis que mais acometem a comunidade da Pedreirinha:  *\n\n");
    while(no) // laco de repeticao ate que o ponteiro aponte para NULL
    {
        printf("\t\t%d.     %s",contador, no -> valor); // valor contido no No atual eh impresso na tela
        printf("\n");
        no = no -> proximo; // metodo para verificar quando a lista acaba / quando o ultimo ponteiro aponta para NULL
		contador++; 
    }
    printf("\n");
}


int fechar()
{
    return 0;
} 


int main()
{
    
    
    printf("                    -----------------------------------\n");
    printf("                    *  Projeto de Estrutura de Dados  *\n");
    printf("                    -----------------------------------\n");
    printf("                         Estrutura de Deque - CRUD");
    Sleep(3000);
    system("cls");
    
    int escolha;
    char valor[30];
    No *valorRemovido, *lista = NULL;
	
	char doenca1[] = {"Tuberculose"};
	char doenca2[] = {"Hanseniase"};
	char doenca3[] = {"AIDS"};
	char doenca4[] = {"Dengue"};
	char doenca5[] = {"Malaria"};
	
	addfinal(&lista, doenca1);
	addfinal(&lista, doenca2);
	addfinal(&lista, doenca3);
	addfinal(&lista, doenca4);
	addfinal(&lista, doenca5);
	
    do
    {
		system("cls");
	    printf("*-----------------------------------------------*\n");
		printf("*                     Menu:                     *\n");
		printf("*-----------------------------------------------*\n");
	    printf("*  1. ADICIONAR ITEM AO FIM DA LISTA            *\n");
	    printf("*  2. ADICIONAR ITEM AO INICIO DA LISTA         *\n");
	    printf("*  3. REMOVER ITEM DA LISTA                     *\n");
	    printf("*  4. ATUALIZAR ITEM DA LISTA                   *\n");
	    printf("*  5. MOSTRAR                                   *\n");
	    printf("*  6. SAIR                                      *\n");
	    printf("*----------------------------------------------*\n");
	    printf("*  SELECIONE SUA OPCAO: ");

		while (scanf("%d", &escolha) != 1 || escolha < 1 || escolha > 6) 
		{
        	printf("\n*  Erro - caracteres e caracteres especiais nao sao permitidos. Digite um valor entre 1 e 6: ");
        	while (getchar() != '\n');
    	}
	        
        switch (escolha)
        {
            case 1:
            	printf("\nDigite o item a ser inserido no fim da lista: ");
            	
				fflush(stdin);
				fgets(valor, 30, stdin);
				valor[strcspn(valor, "\n")] = '\0';
				
            	printf("\n");
            	addfinal(&lista, valor);
            	system("pause");
            	break;
            	
            case 2:
            	printf("\nDigite o item a ser inserido no inicio da lista: ");
            	
            	fflush(stdin);
				fgets(valor, 30, stdin);
				valor[strcspn(valor, "\n")] = '\0';
            	
            	printf("\n");
				addinicio(&lista, valor);
				system("pause");
            	break;
            	
            case 3:
            	printf("\nDigite o item a ser removido da lista: ");
            	
            	fflush(stdin);
				fgets(valor, 30, stdin);
				valor[strcspn(valor, "\n")] = '\0';
            	
            	valorRemovido = remover (&lista, valor);
            	if (valorRemovido)
            	{
            		printf("Item a ser removido: %s\n\n", valorRemovido -> valor);
            		system("pause");
            		free(valorRemovido);
            	}
				else
				{ 
					printf("Este item nao se encontra nessa lista.\n\n");
					system("pause");
				}
				break;
										
            case 4:
			    atualizarItem(lista);
			    system("pause");
			    break;	
            	
            case 5:
            	system("cls");
            	mostrar(lista);
            	system("pause");
            	break;
            
			case 6:
            	fechar();
            	break;
            	
            default:
            printf("\nOpcao invalida.\n");
            system("pause");
        } 
    } while (escolha != 6);
} 
