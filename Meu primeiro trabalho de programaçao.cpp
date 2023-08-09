#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int max, med, min;
	
	cout << "Digite um valor inteiro";
	cin >> a;
	
	cout << "Digite um valor inteiro";
	cin >> b;
	
	cout << "Digite um valor inteiro";
	cin >> c;
	
	if (a > b && a > c)
	{
		max = a;
	}
       if (b > c)
       {
	   	med = b;
	   	min = c;
	   }
	   else 
	   {
	   	med = c;
	   	min = b;
	   }
	   
    if (b > c && b > a)
	{
		max = b;
	}
	   if (a > c)
	   {
	   	med = a;
	   	min = c;
	   }
	   else
	   {
	   	med = c;
	   	min = a;
	   }
	   
	   if (c > a && c > b)
	   {
	   	max = c;
	   }
	   if (a > b)
	   {
	   	med = a;
	   	min = b;
	   }
	   else
	   {
		   med = b;
		   min = a;
	   }
	   
	   cout << max << med << min;

	   
	   	
	return 0;
}