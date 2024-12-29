//Nombre: Número positivo, negativo o cero
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 16/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int numero=0;
	
	cout<<"Ingrese un número: ";
	cin>>numero;
	
	if (numero==0){
		cout<<"\nEl número es CERO";
	}
	else {
		if (numero>0){
			cout<<"\nEl número es POSITIVO";
		}
		else{
			cout<<"\nEl número es NEGATIVO";
		}
	}
	
	return 0;
}
