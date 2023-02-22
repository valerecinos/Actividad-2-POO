#include "cliente.cpp"
#include "empleado.cpp"
#include <iostream>

using namespace std;

int main() {
	string nit, nombres, apellidos, direccion, fecha_nacimiento, telefono, puesto, numero_de_empleado;
	
	
cout << "Ingresar Nit " << endl;
cin >> nit;

cout <<"Ingresar Nombres" << endl;
cin >> nombres;

cout << "Ingresar Apellidos" << endl;
cin >> apellidos;

cout << "ingresar Direccion" << endl;
cin >> direccion;

cout << "Ingresar fecha de nacimiento" << endl;
cin >> fecha_nacimiento;

cout << "Ingresar telefono" << endl;
cin >> telefono;

cout << "Ingresar puesto" << endl;
cin >> puesto;

cout << "Ingresar numero de empleado" << endl;
cin >> numero_de_empleado;

cliente obj = cliente(nombres, apellidos, direccion, telefono, nit, fecha_nacimiento);

cout << "Esta estableciento (set) los datos" << endl;
cliente obj = cliente ();

obj.setNit (nit);
	obj.setnom (nombres);
	obj.setape (apellidos);
	obj.setdir (direccion);
	obj.settel (telefono);
	obj.setfecha (fecha_nacimiento);
	obj.mostrar();

cout << "Esta viendo los datos del cliente" << endl;
cout << "Datos del cliente: " << obj.getnit() << "," << obj.getnombres() << "," << obj.getapellidos() << "," << obj.getdireccion() << ","<< obj.gettelefono << ","<< obj.getfecha_nacimiento;






