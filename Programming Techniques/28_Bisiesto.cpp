//Nombre: Años bisiestos
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 26/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int ano;
	
	cout<<"Ingrese el año que desee: ";
	cin>>ano;
	cout<<"\n";
	
	if(ano%4==0){
		cout<<"El año " <<ano <<" es bisiesto";
	}
	else{
		cout<<"El año " <<ano <<" no es bisiesto";
	}
	
	return 0;
}
