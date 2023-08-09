#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

double indice(float veloc, float temp);

int main()
{
	float v, t;
	float resultado;
	
	cout << "Digite a velocidade do vento em m/s\n";
	cin >> v;
	
	cout << "Digite a temperatura em graus Celsius (o programa so aceita valores\nabaixo ou equivalentes a 10)" << endl;
	cin >> t;
	
	resultado = indice (v, t);
	
	if (t <= 10);
	{
	    cout << "O valor do indice metereologico eh " << resultado << endl;
	}
	
	if (t > 10)
	{
		cout << "O programa nao eh capaz de ler valores acima de 10 graus Celsius.\nO resultado esta impreciso. Fechando aplicacao" << endl;
	}
	

	
	

	return 0;
}



double indice(float veloc, float temp)
{
	return (13.12 +  (0.6215*temp) - (11.37*pow(veloc, 0.16)) + (0.3965*temp*pow(veloc, 0.016)));
	
	
}

