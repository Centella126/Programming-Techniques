//Nombre: N�meros m�s grandes
//Autor: Anah� Montserrat V�zquez Padilla
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
			cout<<"Escriba un n�mero: ";
			cin>>a;
		}
		
		if(a<b){
			cout<<"\nEl n�mero "<<a<<" es menor que "<<b;
		}
		else{
			cout<<"\nEl n�mero "<<a<<" es igual que "<<b;
		}
		
		cout<<"\n�Quieres continuar? ";
		cin>>respuesta;
		a=1;
		b=0;
		system("cls");
	}
	
	return 0;
}
