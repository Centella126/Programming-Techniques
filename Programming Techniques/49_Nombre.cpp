//Nombre: Imprimir nombre
//Autora: Anah� Montserrat V�zquez Padilla
//Fecha: 18/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "spanish");

	int num;
	
	cout<<"N�mero de veces: ";
	cin>>num;
	
	for(int i=0; i<num; i++){
		cout<<"Anah� V�zquez"<<endl;
	}
	
	return 0;
}
