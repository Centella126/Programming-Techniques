//Nombre: Numero mayor
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 18/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int a=0, b=0, c=0;
	string respuesta="si";
	
	do{
		do{
			cout<<"Ingrese un numero: ";
			cin>>a;
			
			if(a>b){
				c=a;
			}
			b=a;
			
		}while(a!=0);
		
		cout<<"\nEl numero mayor es: "<<c;
		
		cout<<"\n\n¿Quieres continuar? ";
		cin>>respuesta;
		a=0;
		b=0;
		c=0;
		system("CLS");
		
	}while(respuesta=="si" || respuesta=="SI" || respuesta=="Si");
	
	cout<<"Chao chao";
	
	return 0;
}
