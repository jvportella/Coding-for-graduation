#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float area, perimetro, raio;
	float pi = 3.14;
	
	cout << "Digite o raio da circunferencia em metros\n";
	cin >> raio;
	
	area = (pow(raio, 2)*pi);
	perimetro = (2*pi)*raio;
	
	cout << "A area da sua circunferencia eh " << area << " metros (considerando Pi como 3,14\n";
	cout << "O perimetro da sua circunferencia eh " << perimetro << " metros (considerando Pi como 3,14)\n";
	
	
	return 0;
}

