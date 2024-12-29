//Nombre: Patron con asteriscos
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 25/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int num=0;
	string respuesta="si";
	
	while(respuesta=="SI" || respuesta=="Si" || respuesta=="si"){	
		cout<<"Digite el numero de renglones: ";
		cin>>num;
		
		for(int i=0; i<=num; i++){
			for(int j=1; j<=i;j++){
				cout<<"*";
			}
			cout<<endl;	
		}
		cout<<"\n\n¿Quieres continuar? ";
		cin>>respuesta;
		num=0;
		system("cls");
	}
	
	return 0;
}
