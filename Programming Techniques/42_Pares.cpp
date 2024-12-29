//Nombre: Números pares del 1 al 100
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 14/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "spanish");
	
	int i=0;
	
	while(100>=i){
		if(i%2==0){
			cout<<i<<"\n";
		}
		i++;
	}
	
	return 0;
}
