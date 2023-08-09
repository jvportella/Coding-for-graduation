#include <iostream>
using namespace std;


double inflacao(float rsantes, float rsdepois);


int main()
{
	float resultadoinf;
	float preco1, preco2;
	while (resultadoinf >= 0)
	{

	cout << "Digite o valor do produto no ano passado" << endl;
	cin >> preco1;
	
	
	cout << "Digite o valor atual do produto" << endl;
	cin >> preco2;
	
	
	resultadoinf = inflacao(preco1, preco2);
	
	
	cout << "A inflacao sobre o produto eh de "<< resultadoinf << "%" << endl;
	}
	
 
	
	return 0;
}



double inflacao(float rsantes, float rsdepois)
{
	return (rsdepois-rsantes)/rsantes;
	
}
