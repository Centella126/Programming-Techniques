//Nombre: Mayor de tres n�meros
//Autor: Anah� Montserrat V�zquez Padilla
//Fecha: 16/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	float num1=0, num2=0, num3=0;
	
	cout<<"Ingrese el primer n�mero: ";
	cin>>num1;
	cout<<"Ingrese el segundo n�mero: ";
	cin>>num2;
	cout<<"Ingrese el tercer n�mero: ";
	cin>>num3;
	cout<<"\n";
	
	if (num1>num2 && num1>num3){
		cout<<"El N�MERO 1 es el n�mero mayor\n\n";
	}
	else{
		if (num2>num1 && num2>num3){
			cout<<"El N�MERO 2 es el n�mero mayor\n\n";
		}
		else{
			cout<<"El N�MERO 3 es el n�mero mayor\n\n";
		}
	}
	
	return 0;
}
