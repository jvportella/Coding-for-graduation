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
		void walkfoward (int n);
		void walkback (int n);
		void walkright (int n);
		void walkleft (int n);
		void walkup (int n);
		void walkdown (int n);
		void getData();
		
		Drone (int nNumserie, int nX, int nY, int nZ);
		Drone ();	
};

void Drone::walkfoward (int n)
{
	y = y + n;
}
void Drone::walkback (int n)
{
	y = y - n;
}
void Drone::walkright (int n)
{
	x = x + n;
}
void Drone::walkleft (int n)
{
	x = x - n;
}
void Drone::walkup (int n)
{
	z = z + n;
}
void Drone::walkdown (int n)
{
	z = z - n;
}
void Drone::getData()
{
	cout << "Numero de serie: " << numserie << "\nCoordenadas (x, y, z): "	<< x << ", " << y << ", " << z << endl;
}
Drone::Drone(int nNumserie, int nX, int nY, int nZ)
{
	numserie = nNumserie;
	x = nX;
	y = nY;
	z = nZ;
}
Drone::Drone()
{
	numserie = 413;
	x = 0;
	y = 0;
	z = 0;
}


int main()
{
	Drone Wai3 =  Drone();
	Drone Hou7 =  Drone(413, 14, 40, 88);
	
	Wai3.walkright(7);
	Wai3.walkfoward(20);
	Wai3.walkup(44);
	
	Hou7.walkleft(7);
	Hou7.walkback(20);
	Hou7.walkdown(44);
	

	Wai3.getData();
	Hou7.getData();
	
	
	return 0;
}
