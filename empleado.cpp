#include "persona.cpp"
#include <iostream>

using namespace std;
class empleado : persona  {
	
	public : string puesto, numero_de_empleado;
	
	public : empleado () {}
		
	empleado (string nom, string ape, string dir, string tel, string fecha, string n, string num, string pues) : persona (nom, ape, dir, tel, fecha){
	
	numero_de_empleado = num;
	puesto = pues;
	
	void mostrar ();
	}
};

