//Nombre: Mayor, menor o igual
//Autor: Anah� Montserrat V�zquez Padilla
//Fecha: 16/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int num1=0, num2=0;
	
	cout<<"Ingrese un n�mero: ";
	cin>>num1;
	cout<<"\nIngrese otro n�mero: ";
	cin>>num2;
	
	if (num1==num2){
		cout<<"\n\nlos n�meros son IGUALES\n";
	}
	else {
		if (num1>num2){
			cout<<"\n\nEl n�mero 1 es MAYOR que el n�mero 2\n";
		}
		else{
			cout<<"\n\nEl n�mero 1 es MENOR que el n�mero 2\n";
		}
	}
	
	return 0;
}
