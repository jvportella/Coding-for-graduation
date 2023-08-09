#include <iostream>
using namespace std;

class Dragao
{
	private: 
		int hp;
		int str;
		int def;
	public:
		void atacar (int num);
		void atacar2 (int num2);
		
		Dragao(int vida, int forca, int defesa);
		Dragao();
};

void Dragao::atacar (int num)
{
	hp = hp - num;
	cout << "Kalameet atacou e causou " << num << " de dano!";
};
void Dragao::atacar2 (int num2)
{
	hp = hp - num2;
	cout << "\nKalameet atacou e causou " << num2 << " de dano!";
};

Dragao::Dragao(int vida, int forca, int defesa)
{
	vida = hp;
	forca = str;
	defesa = def;
	cout << "Kalameet tem " << vida << " de vida, " << forca << " de forca e " << defesa << " de defesa.";
}
Dragao::Dragao()
{
	hp = 0;
	str = 0;
	def = 0;
}

int main()
{
	Dragao Kalameet;
	Kalameet.atacar(10);
	Kalameet.atacar2(18);
}
