//Nombre: Acceso a usuario
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 18/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	string usuario;
	string contra;
	
	cout<<"Introduzca su usuario: ";
	cin>>usuario;
	cout<<"Introduzca su contraseña: ";
	cin>>contra;
	
	if (usuario=="Peter" && contra=="PeterAlca"){
		cout<<"\n\nBienvenido Peter Alcachofa\n";
	}
	else{
		cout<<"\n\nDatos incorrectos\n";
	}
	
	return 0;
}
