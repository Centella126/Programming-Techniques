//Nombre: N�mero positivo, negativo o cero
//Autor: Anah� Montserrat V�zquez Padilla
//Fecha: 16/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int numero=0;
	
	cout<<"Ingrese un n�mero: ";
	cin>>numero;
	
	if (numero==0){
		cout<<"\nEl n�mero es CERO";
	}
	else {
		if (numero>0){
			cout<<"\nEl n�mero es POSITIVO";
		}
		else{
			cout<<"\nEl n�mero es NEGATIVO";
		}
	}
	
	return 0;
}
