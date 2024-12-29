//Nombre: Suma rara
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 29/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int num=0, imp=0, par=0;
	string respuesta="si";
	
	while(respuesta=="SI" || respuesta=="Si" || respuesta=="si"){	
		cout<<"Se calculará la suma de la secuencia 1-2+3-4+5-6+...n";
		cout<<"\n\nIngrese un número: ";
		cin>>num;
		
		for(int i=1; i<=num; i++){
			if(i%2==0){
				imp=imp+i;
			}
			else{
				par=par+i;
			}
		}
		cout<<"La suma de esta secuencia rara es: "<<par-imp;
		
		cout<<"\n\n¿Quieres continuar? ";
		cin>>respuesta;
		num=0;
		imp=0;
		par=0;
		system("cls");
	}
	
	return 0;
}
