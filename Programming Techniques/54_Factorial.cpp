//Nombre: N�meros factoriales
//Autora: Anah� Montserrat V�zquez Padilla
//Fecha: 20/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int num=0, fac=1;
	
	cout<<"Digite un n�mero: ";
	cin>>num;
	
	if(num==0){
		cout<<"\nEl factorial de 0 es: 1";
	}
	
	else{
		for(int i=num; i>=1; i--){
			fac=fac*i;
		}
		cout<<"\nEl factorial de "<<num<<" es: "<<fac;
	}
	
	
	return 0;
}
