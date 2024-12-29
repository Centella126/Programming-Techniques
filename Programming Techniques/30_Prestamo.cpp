//Nombre: Solicitante de pr�stamo
//Autor: Anah� Montserrat V�zquez Padilla
//Fecha: 26/02/2022

#include <iostream>
#include <stdlib.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int puntaje=0;
	string nombre, apellido;
	float pres, s_a, o_p; //pres - pr�stamo, s_a - Salario anual, o_p - Otras propiedades 
	
	cout<<"Favor de ingresar su nombre y apellido: ";
	cin>>nombre >> apellido;
	cout<<"\nIngrese el monto del pr�stamo solicitado: ";
	cin>>pres;
	cout<<"\nIngrese su salario anual: ";
	cin>>s_a;
	cout<<"\nIngrese el valor por otras propiedades: ";
	cin>>o_p;
	
	system("cls");
	
	cout<<"Nombre: " <<nombre<<" "<<apellido;
	cout<<"\nMonto del pr�stamo: " <<pres;
	cout<<"\nSalario anual: " <<s_a;
	cout<<"\nMonto por otras propiedades: " <<o_p;
	
	if(s_a>=pres*0.5){
		puntaje=5;
	}
	else if(s_a>=pres*0.25 && s_a<pres*0.5){
		puntaje=3;
	}
	else if(s_a>=pres*0.10 && s_a<pres*0.25){
		puntaje=1;
	}

	if(o_p>=pres*2){
		puntaje=puntaje+5;
	}
	else if(o_p==pres){
 		puntaje=puntaje+3;
	}
	
	
	if(puntaje>6){
		cout<<"\n\n\nEstimado/a " <<nombre<<" "<<apellido<< " tiene " <<puntaje<< " puntos. S� es candidato/a a pr�stamo\n\n";
	}
	else{
		cout<<"\n\n\nEstimado/a " <<nombre<<" "<<apellido<< " tiene " <<puntaje<< " puntos. No es candidato/a a pr�stamo\n\n";
	}
	
	return 0;
}
