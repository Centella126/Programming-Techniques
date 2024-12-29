//Nombre: Descuento en la colegiatura
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 25/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int cal;
	float porcentaje, colegiatura_neta;
	
	cout<<"Ingrese la calificación: ";
	cin>>cal;
	
	if (cal>=9){
		porcentaje=20;
		colegiatura_neta= 1500*0.80;
		
		cout<<"\nPorcentaje: "<<porcentaje;
		cout<<"\nColegiatura neta: "<<colegiatura_neta;
	}
	
	if (cal>=8 && cal<9){
		porcentaje=10;
		colegiatura_neta= 1500*0.90;
		
		cout<<"\nPorcentaje: "<<porcentaje;
		cout<<"\nColegiatura neta: "<<colegiatura_neta;
	}
	
	if (cal<8 && cal>=7){
		porcentaje=5;
		colegiatura_neta= 1500*0.95;
		
		cout<<"\nPorcentaje: "<<porcentaje;
		cout<<"\nColegiatura neta: "<<colegiatura_neta;
	}
	
	if (cal<7){
		porcentaje=0;
		colegiatura_neta= 1500*1;
		
		cout<<"\nPorcentaje: "<<porcentaje;
		cout<<"\nColegiatura neta: "<<colegiatura_neta;
	}
	
	
	
	return 0;
}
