//Nombre: Par o impar
//Autor: Anah� Montserrat V�zquez Padilla
//Fecha: 14/02/2022

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
		if (numero%2==0){
			cout<<"\nEl n�mero es PAR";
		}
		else{
			cout<<"\nEl n�mero es IMPAR";
		}
	}
	
	return 0;
}
