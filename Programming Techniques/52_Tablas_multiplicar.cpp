//Nombre: Tablas de multiplicar
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 20/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int num=0;
	string respuesta="si";
	
	while(respuesta=="SI" || respuesta=="Si" || respuesta=="si"){

		cout<<"Ingrese un número del 1 al 100: ";
		cin>>num;
		
		if(num>0 && num<=100){
			for(int i=1; i<=10; i++){
				cout<<num<<" x "<<i<<" = "<<num*i<<endl;
			}
		}
		else{
			cout<<"\nIngrese un valor que entre en el rango";
		}
		
		cout<<"\n\n¿Quieres continuar? ";
		cin>>respuesta;
		num=0;
		system("cls");
 	}
	
	cout<<"Chao chao";
	
	
	return 0;
}
