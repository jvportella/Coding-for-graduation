#include <iostream>
using namespace std;

int main()
{
	float custoinicial, custofinal;
	
	cout << "Digite o custo de fabrica do carro: ";
	cin >> custoinicial;
	
	// considerando que os impostos de 45% !nao! sejam sobre o valor já adicionado de 28% do distribuidor; 
	custofinal = custoinicial + custoinicial*0.28 + custoinicial*0.45;
	
	cout << "O valor final do carro sera: " << custofinal << endl;
	
	return 0;
}