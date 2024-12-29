//Nombre: Mayor de cinco números
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 16/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	float num1=0, num2=0, num3=0, num4=0, num5=0;
	
	cout<<"Ingrese el primer número: ";
	cin>>num1;
	cout<<"Ingrese el segundo número: ";
	cin>>num2;
	cout<<"Ingrese el tercer número: ";
	cin>>num3;
	cout<<"Ingrese el cuarto número: ";
	cin>>num4;
	cout<<"Ingrese el quinto número: ";
	cin>>num5;
	cout<<"\n";
	
	if (num1>num2 && num1>num3 && num1>num4 && num1>num5){
		cout<<"El NÚMERO 1 es el número mayor\n\n";
	}
	else{
		if (num2>num1 && num2>num3 && num2>num4 && num2>num5){
			cout<<"El NÚMERO 2 es el número mayor\n\n";
		}
		else{
			if (num3>num1 && num3>num2 && num3>num4 && num3>num5){
				cout<<"El NÚMERO 3 es el número mayor\n\n";
			}
			else{
				if (num4>num1 && num4>num2 && num4>num3 && num4>num5){
					cout<<"El NÚMERO 4 es el número mayor\n\n";
				}
				else{
					cout<<"El NÚMERO 5 es el número mayor\n\n";
				}	
			}
		}
	}
	
	return 0;
}
