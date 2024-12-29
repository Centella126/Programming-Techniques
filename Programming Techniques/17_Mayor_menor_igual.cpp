//Nombre: Mayor, menor o igual
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 16/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int num1=0, num2=0;
	
	cout<<"Ingrese un número: ";
	cin>>num1;
	cout<<"\nIngrese otro número: ";
	cin>>num2;
	
	if (num1==num2){
		cout<<"\n\nlos números son IGUALES\n";
	}
	else {
		if (num1>num2){
			cout<<"\n\nEl número 1 es MAYOR que el número 2\n";
		}
		else{
			cout<<"\n\nEl número 1 es MENOR que el número 2\n";
		}
	}
	
	return 0;
}
