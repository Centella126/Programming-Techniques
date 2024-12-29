//Nombre: Par o impar
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 14/02/2022

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
		if (numero%2==0){
			cout<<"\nEl número es PAR";
		}
		else{
			cout<<"\nEl número es IMPAR";
		}
	}
	
	return 0;
}
