#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string name;

	cout << "Digite a sua idade em anos: ";
    cin >> age;
	
	fflush(stdin);

    cout << "\nAgora digite seu nome (apenas letras): ";
    getline(cin, name);

    cout << "\nSeu nome eh " << name << " e sua idade eh " << age << " anos." << endl; 

	return 0;
}
