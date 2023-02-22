#include "persona.cpp"
#include <iostream>

using namespace std;
class cliente : persona {
	
	public : string nit;
	
	public : cliente () {
	}
	cliente (string nom, string ape, string dir, string tel, string fecha, string n) : persona (nom, ape, dir, tel, fecha){
		nit = n;
		
	}
	void mostrar () {
		cout << "-------------------" << endl;
		cout << nombres << ","<< apellidos <<"," << direccion << "," << telefono << ","<< fecha_nacimiento<< "," << nit << endl;
		
	}
};
