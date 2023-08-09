#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
	double media = 0;
	double desvpad = 0;
	double desvpad2 = 0;
	double desvpad3 = 0;
	double desvpadtotal = 0;
	int soma = 0;
	int soma2 = 0;
	int contador = 0;
	double var, var2;
	
	ifstream arq("Arquivo.txt");
	
	if(arq.is_open())
	{
		while(!arq.eof())
		{
			arq >> var;
			cout << var << endl;
			soma += var;
			contador += 1;
		}
		media = soma / contador;
		cout << "\nMedia dos valores: " << media << endl;
			
	}
	
	arq.close();
	
	arq.open("Arquivo.txt");
	if(arq.is_open())
	{
	 	while (!arq.eof())
	 	{
	 		arq >> var2;
	 		desvpad = pow(var2 - media, 2);
	 		desvpad2 += desvpad;
		}
		desvpad3 = desvpad2 / (contador - 1);
		desvpadtotal = sqrt(desvpad3);
		cout << "Desvio padrao dos valores: " << desvpadtotal << endl; 
	}
	
	return 0;
}
