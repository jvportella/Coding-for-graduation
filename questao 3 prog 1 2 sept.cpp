#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float l1;
	float perim, area, diag;
	
	cout << "Digite o valor do lado do quadrado: ";
	cin >> l1;
	
	perim = (l1*4);
	area = pow(l1, 2);
	diag = (l1*sqrt(2));
	
	cout << "O perimetro do quadrado eh " << perim << endl;
	cout << "A area do quadrado eh " << area << endl;
	cout << "A diagonal do quadrado eh " << diag << endl;
	
		
	
	return 0;
} 