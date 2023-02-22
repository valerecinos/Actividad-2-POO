#include <iostream>
using namespace std;

class persona {
	protected : string nombres, apellidos, direccion, telefono, fecha_nacimiento;
	
	
	protected: 
	          persona (){}
	          	persona (string nom, string  ape, string dir,string tel, string fecha){
	          		nombres = nom;
	          		apellidos = ape;
	          		direccion = dir;
	          		telefono = tel;
	          		fecha_nacimiento = fecha;
	          	
				  
				  void mostrar ();
			  }
}; 
