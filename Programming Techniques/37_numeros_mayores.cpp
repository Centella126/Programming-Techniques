//Nombre: Números más grandes
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 11/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int a=1, b=0;
	string respuesta="si";
	
	while(respuesta=="si" || respuesta=="Si" || respuesta=="SI"){
		while(a>b){
			b=a;
			cout<<"Escriba un número: ";
			cin>>a;
		}
		
		if(a<b){
			cout<<"\nEl número "<<a<<" es menor que "<<b;
		}
		else{
			cout<<"\nEl número "<<a<<" es igual que "<<b;
		}
		
		cout<<"\n¿Quieres continuar? ";
		cin>>respuesta;
		a=1;
		b=0;
		system("cls");
	}
	
	return 0;
}
