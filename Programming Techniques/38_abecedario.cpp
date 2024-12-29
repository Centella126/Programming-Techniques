//Nombre: Abecedario
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 11/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	char i='A';
	
	while(i<='Z'){
		cout<<i<<"\n";
		i++;
	}
	
	return 0;
}
