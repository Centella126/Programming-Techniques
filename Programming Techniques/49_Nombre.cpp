//Nombre: Imprimir nombre
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 18/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "spanish");

	int num;
	
	cout<<"Número de veces: ";
	cin>>num;
	
	for(int i=0; i<num; i++){
		cout<<"Anahí Vázquez"<<endl;
	}
	
	return 0;
}
