#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x1, y1, x2, y2;
	float dist;
	
	cout << "Digite o primeiro ponto de x: ";
	cin >> x1;
	cout << "Digite o primeiro ponto de y: ";
	cin >> y1;
	cout << "Digite o segundo ponto de x: ";
	cin >> x2;
	cout << "Digite o segundo ponto de y: ";
	cin >> y2;
	
	dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	cout << "A distancia entre os pontos eh " << dist << endl;
	
	
	
	
	
	return 0;
}