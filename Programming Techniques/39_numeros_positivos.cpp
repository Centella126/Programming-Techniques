//Nombre: Abecedario
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 11/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int i=0, a=0, num=0, nup=0;
	string respuesta="si";
	
	
	while(respuesta=="si" || respuesta=="Si" || respuesta=="SI"){
		cout<<"Ingrese la cantidad de números postivos a escribir: ";
		cin>>num;
		
		while(num>nup){
			i++;
			cout<<"\nIngrese un número: ";
			cin>>a;
			
			if(a>0){
				nup=nup+1;
			}
		}
		cout<<"\nHa escrito "<<i<<" números, "<<nup<<" positivos";
		
		cout<<"\n¿Quieres volver? ";
		cin>>respuesta;
		i=0;
		a=0;
		num=0;
		nup=0;
		system("cls");
	}
	
	return 0;
}
