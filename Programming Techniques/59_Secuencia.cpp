//Nombre: Secuencia
//Autora: Anah� Montserrat V�zquez Padilla
//Fecha: 29/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int num, sec;
	string respuesta="si";
	
	while(respuesta=="SI" || respuesta=="Si" || respuesta=="si"){	
		cout<<"Ingrese hasta donde llegar� la sucesi�n n^2: ";
		cin>>num;
		
		for(int i=1; i<=num; i++){
			sec=i*i;
			cout<<"no."<<i<<": "<<sec<<endl;
		}
		cout<<"\n\n�Quieres continuar? ";
		cin>>respuesta;
		num=0;
		sec=0;
		system("cls");
	}
	
	return 0;
}
