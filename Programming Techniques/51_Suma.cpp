//Nombre: Suma pares e impares
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 18/03/2022

#include <iostream>

using namespace std;

int main() 
{
	int sp=0, si=0;
	
	for(int i=2, j=1; i<=100,j<=100; i=i+2, j=j+2){		
		sp=sp+i;
		si=si+j;
	}
	
	cout<<"Suma de los pares: "<<sp;
	cout<<"\nSuma de los impares: "<<si;
	
	return 0;
}
