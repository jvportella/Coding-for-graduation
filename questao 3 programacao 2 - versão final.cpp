#include <iostream>
#include <cmath>
using namespace std;


double hat(float peso, float altura);
double coat(float peso2, float altura2, int idade);
double waist(float peso3, int idade);

int main()
{
	float resultado3;
	while(resultado3 >= 0)
	{
		int age;
	   	double weight, height;
		float resultado1, resultado2, resultado3;
		
	
		cout << "Digite seu peso em libras (fator de conversao de kg para libras = (peso em kg)/2.205)\n";
		cin >> weight;
	
		cout << "Digite sua altura em polegadas (fator de conversao de cm para polegadas = 1 polegada equivale a 2.54cm)\n";
		cin >> height;
	
		cout << "Digite sua idade\n";
		cin >> age;
	
	
	
		resultado1 = hat(weight, height);
		cout << "O tamanho do seu chapeu sera " << resultado1 << endl;
	
	
	
		resultado2 = coat(weight, height, age);
		cout << "O tamanho do casaco sera " << resultado2 << endl;
	
	
	
		resultado3 = waist(weight, age);
		cout << "O tamanho da cintura sera " << resultado3 << endl;
		
		
	}
	
	
	
	return 0;
}


double hat(float peso, float altura)
{
	return (peso/altura)*2.9;
}



double coat(float peso2, float altura2, int idade)
{
	float A;
	A =(altura2*peso2)/288;
	
	int x;
	x = idade - 30;
	
	if (idade > 30)
	{
		A = A + ((x/10)*4.9212625);
	}
	
	return A;
}


	
double waist(float peso3, int idade)
{
	float B;
	B = (peso3)/5.7;
	
	int y;
 	y = idade - 28;
 	
 	if(idade > 28)
	 {
	 	B = B + ((y/2)*3.93701);
	 }
	 return B;
}