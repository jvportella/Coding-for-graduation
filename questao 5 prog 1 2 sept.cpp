#include <iostream>
using namespace std;

int main()
{
	float numero1, numero2;
	float subtr, diffquad;
	
	cout << "Digite o primeiro valor: ";
	cin >> numero1;
	cout << "Digite o segundo valor: ";
	cin >> numero2;
	
	subtr = (numero1 - numero2)*(numero1 - numero2);
	diffquad = (numero1*numero1) - (numero2*numero2);
	
	cout << "O quadrado da diferenca do primeiro valor para o segundo eh " << subtr << endl;
	cout << "A diferenca do quadrado dos dois valores eh " << diffquad << endl;
	
	
	return 0;
}