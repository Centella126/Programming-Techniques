//Nombre: Letra min�scula
//Autor: Anah� Montserrat V�zquez Padilla
//Fecha: 25/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");

	char letra;
	
	cout<<"Ingrese una letra min�scula ";
	cin>> letra;
	
	if (letra=='a' or letra=='e' or letra=='i' or letra=='o' or letra=='u'){
		cout<<"\n\nLa letra " <<letra<< " ingresada es una VOCAL";	
	}
	else{
		cout<<"\n\nLa letra " <<letra<< " ingresada NO es VOCAL";
	}

	return 0;
}
