//Nombre: Tabla de multilplicar
//Autor: Anahí Montserrat Vázquez Padila
//Fecha: 14/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int num=0, i=0, pro=0;
	string respuesta="si";
	
	while (respuesta=="si" || respuesta=="Si" || respuesta=="SI"){
		cout<<"Introduzca un número: ";
		cin>>num;
		
		while(i<=10){
			pro=num*i;
			cout<<"\n"<<num<<" x "<<i<<" = "<<pro;
			i++;
		}
		cout<<"\n\n¿Desea continuar? ";
		cin>>respuesta;
		num=0;
		pro=0;
		i=0;
		system("cls");
	}
	
	cout<<"Ahí nos vidrios";
	
	return 0;
}
