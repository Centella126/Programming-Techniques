//Nombre: Números factoriales
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha:14/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "spanish");
	
	int num=0, fac=0, i=0;
	string respuesta="si";
	
	while (respuesta=="si" || respuesta=="Si" || respuesta=="SI"){
		cout<<"Digite un número entero: ";
		cin>>num;
		
		i=num;
		fac=num;
		
		if(num==0){
			cout<<"\nEl factorial de 0 es 1";
		}
		else{
			while(i>1){
				i--;
				fac=fac*i;
			}
			cout<<"\nEl factorial de "<<num<<" es: "<<fac;
		}
		cout<<"\n\n¿Desea continuar? ";
		cin>>respuesta;
		num=0;
		fac=0;
		i=0;
		system("cls");
	}
	
	cout<<"Nos vemos";
	
	return 0;
}
