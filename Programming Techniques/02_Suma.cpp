//Nombre: Suma de 2 números
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 04/02/2022

#include <iostream>

using namespace std;

int main() 
{
	int a = 2;
	int b = 3;
	int suma = 0;
	
	//int a=2, b=3, suma=0;
	
	cout<<"Ingresa el valor 1: ";
	cin>> a;
	cout<<"Ingresa el valor 2: ";
	cin>> b;
	
	suma = a + b;
	
	cout<<"\n""La suma es: "<<suma<<"\n"<<endl;  //endl es un espacio
	
	return 0;
}
