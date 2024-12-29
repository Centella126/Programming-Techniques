//Nombre: Mayor de tres números
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 16/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	float num1=0, num2=0, num3=0;
	
	cout<<"Ingrese el primer número: ";
	cin>>num1;
	cout<<"Ingrese el segundo número: ";
	cin>>num2;
	cout<<"Ingrese el tercer número: ";
	cin>>num3;
	cout<<"\n";
	
	if (num1>num2 && num1>num3){
		cout<<"El NÚMERO 1 es el número mayor\n\n";
	}
	else{
		if (num2>num1 && num2>num3){
			cout<<"El NÚMERO 2 es el número mayor\n\n";
		}
		else{
			cout<<"El NÚMERO 3 es el número mayor\n\n";
		}
	}
	
	return 0;
}
