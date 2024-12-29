//Nombre: Porcentajes
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 25/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int num, precio;
	float porcentaje, precio_neto;
	
	cout<<"Ingrese el número de pantalones comprados ";
	cin>>num;
	
	if (num<5){
		porcentaje=0;
		precio= 500*num;
		precio_neto= precio*1;
		
		cout<<"\nPorcentaje: "<<porcentaje;
		cout<<"\nPrecio: "<<precio;
		cout<<"\nPrecio neto: "<<precio_neto;
	}
	if (num>=5 && num<12){
		porcentaje=15;
		precio= 500*num;
		precio_neto=precio*0.85;
		
		cout<<"\nPorcentaje: "<<porcentaje;
		cout<<"\nPrecio: "<<precio;
		cout<<"\nPrecio neto: "<<precio_neto;
	}
	if (num>=12){
		porcentaje=30;
		precio= 500*num;
		precio_neto=precio*0.70;
		
		cout<<"\nPorcentaje: "<<porcentaje;
		cout<<"\nPrecio: "<<precio;
		cout<<"\nPrecio neto: "<<precio_neto;
	}
	
	
	return 0;
}
