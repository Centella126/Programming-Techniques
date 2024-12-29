//Nombre: Mayor, menor o igual a cero
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 11/02/2022

#include <iostream>

using namespace std;

int main() 
{
	int numero;
	
	cout<<"Introduce un numero: ";
	cin>>numero;
	
	if (numero > 10){
		cout<<"\n\nEl numero que introdujiste es mayor a 10\n\n";
	}
		
	if (numero < 10){
	cout<<"\n\nEl numero que introdujiste es menor a 10\n\n";
	}
		
	if (numero == 10){
	cout<<"\n\nEl numero que introdujiste es igual a 10\n\n";
	}
	
	return 0;
}
