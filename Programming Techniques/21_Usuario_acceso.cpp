//Nombre: Acceso a usuario
//Autor: Anah� Montserrat V�zquez Padilla
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
	cout<<"Introduzca su contrase�a: ";
	cin>>contra;
	
	if (usuario=="Peter" && contra=="PeterAlca"){
		cout<<"\n\nBienvenido Peter Alcachofa\n";
	}
	else{
		cout<<"\n\nDatos incorrectos\n";
	}
	
	return 0;
}
