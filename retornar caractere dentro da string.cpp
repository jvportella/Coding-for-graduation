//Faça uma função que retorne a posição de um dado caracter dentro de uma string.
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str;
    char letra;
    int posicao = 1;
    
    cout << "Digite sua string: ";
    getline(cin, str);
    
    int tamanhoString = str.length();
	
	cout << "\n\nDigite o caractere a ser encontrado na string: ";
	cin >> letra;	

    for (int i = 0; i < tamanhoString; i++)
    {
    	if (str[i] == letra)
    	{
    		cout << "\n\nO caractere encontra-se na posicao " << posicao << ".\n";
    		break;
    	}
        posicao++;
    }
}
