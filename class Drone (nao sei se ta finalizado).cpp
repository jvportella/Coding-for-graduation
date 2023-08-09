#include <iostream>
using namespace std;

class Drone
{
    private:
        int numserie;
        int x;
        int y;
        int z;
    public:
        void frente(int n);
        void tras(int n);
        void direita(int n);
        void esquerda(int n);
        void cima(int n);
        void baixo(int n);
        void informacao();

        Drone();
        Drone(int cNumserie, int cX, int cY, int cZ); 
};  

void Drone::frente(int n)
{
    y = y + n;
}
void Drone::tras(int n)
{
    y = y - n;
}
void Drone::direita(int n)
{
    x = x + n;
}
void Drone::esquerda(int n)
{
    x = x - n;
}
void Drone::cima(int n)
{
    z = z + n;
}
void Drone::baixo(int n)
{
    z = z - n;
}
Drone::Drone()
{
    numserie = 413;
    x = 0;
    y = 0;
    z = 0;
}
Drone::Drone(int cNumserie, int cX, int cY, int cZ)
{
    numserie = cNumserie;
    x = cX;
    y = cY;
    z = cZ;
}
void Drone::informacao()
{
    cout << "Numero de serie: " << numserie << " Coordenadas (x, y, z): " << x << ", " << y << ", " << z << endl;
}

int main()
{
    Drone Wai3 = Drone();
    Drone Hou7 = Drone (413, 14, 40, 88);

    Wai3.direita(20);
	Wai3.frente(7);
	Wai3.cima(44);
	
	Hou7.esquerda(20);
	Hou7.tras(7);
	Hou7.baixo(44);

    Wai3.informacao();
    Hou7.informacao();

    return 0;
}

