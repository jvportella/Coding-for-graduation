#include <iostream>
using namespace std;

class Dragao
{
    private:
        int hp;
        int str;
        int def;
    public:
        void atacar(int n);
        void defender(int n);
        void ferir(int n);
        void curar(int n);

        Dragao();
        Dragao(int constructorhp, int constructorstr, int constructordef);      
};

void Dragao::atacar(int n)
{
    int resultado;
    resultado = n + str;
    cout << "O dragao Kalameet atacou e causou " << resultado << " de dano!" << endl << endl;
}
void Dragao::defender(int n)
{
    int resultado;
    resultado = (n + def) - str;
    cout << "O dragao Kalameet defendeu-se de " << resultado << " de dano!" << endl << endl;
}
void Dragao::ferir(int n)
{
    int resultado;
    resultado = hp - n;
    cout << "O hp total de Kalameet agora eh: " << resultado << endl << endl;  
}
void Dragao::curar(int n)
{
    int resultado;
    resultado = hp + n;
    cout << "O hp total de Kalameet agora eh: " << resultado << endl << endl;
}
Dragao::Dragao()
{
    hp = 0;
    str = 0;
    def = 0;
}
Dragao::Dragao(int constructorhp, int constructorstr, int constructordef)
{
    hp = constructorhp;
    str = constructorstr;
    def = constructordef;
}


int main()
{
    Dragao Kalameet = Dragao(5000, 2400, 1800);
    Kalameet.atacar(1000);
    Kalameet.defender(2000);
    Kalameet.ferir(500);
    Kalameet.curar(0);

    return 0;
}
