//Nombre: Número de digitos
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 11/02/2022

#include <iostream>

using namespace std;

int main() 
{
	int numero;
	
	cout<<"Introduce un numero: ";
	cin>>numero;
	cout<<"\n";
	
	if (numero >0 & numero <10){
		cout<<"La cifra introducida tiene 1 digito";
	}
	
	if (numero >9 & numero <101){
		cout<<"La cifra introducida tiene 2 digitos";
	}
	
	if (numero >99 & numero <1000){
		cout<<"La cifra introducida tiene 3 digitos";
	}
	
	if (numero >999 & numero <10000){
		cout<<"La cifra introducida tiene 4 digitos";
	}
	
	if (numero >=10000){
		cout<<"La cifra introducida tiene 5 o más digitos";
	}
	
	return 0;
}
