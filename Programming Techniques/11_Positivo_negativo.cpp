//Nombre: Positivo o negativo
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 11/02/2022

#include <iostream>

using namespace std;


int main() 
{
	float num;
	
	cout<<"Ingrese un número: ";
	cin>>num;
	cout<<"\n";
	
	if (num > 0){
		cout<<"El numero ingresado es positivo";
	}
	
	if (num < 0){
		cout<<"El numero ingresado es negativo";
	}
	
	if (num == 0){
		cout<<"El numero ingresado ni es positivo ni es negativo";
	}
	
	return 0;
}
