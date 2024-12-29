//Nombre: Promedio de 10 números
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 04/02/2022

#include <iostream>

using namespace std;

int main()
{

	float a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, promedio = 0;
	
	cout<<"Ingrese el primer valor: ";
	cin>> a;
	cout<<"Ingrese el segundo valor: ";
	cin>> b;
	cout<<"Ingrese el tercer valor: ";
	cin>> c;
	cout<<"Ingrese el cuarto valor: ";
	cin>> d;
	cout<<"Ingrese el quinto valor: ";
	cin>> e;
	cout<<"Ingrese el sexto valor: ";
	cin>> f;
	cout<<"Ingrese el séptimo valor: ";
	cin>> g;
	cout<<"Ingrese el octavo valor: ";
	cin>> h;
	cout<<"Ingrese el noveno valor: ";
	cin>> i;
	cout<<"Ingrese el décimo valor: ";
	cin>> j;
		
	promedio = (a+b+c+d+e+f+g+h+i+j)/10;
	
	cout<<"\n""El promedio de los valores es: "<<promedio<<"\n";
	
	return 0;
}
