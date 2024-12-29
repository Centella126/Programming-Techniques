//Nombre: Suma de factoriales
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 20/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "spanish");
	
	double num=0, fac=1, sum=0;
	
	cout<<"Se sumarán los factoriales de todos los numeros menor al ingresado";
	
	cout<<"\n\nDigite un número: ";
	cin>>num;
	
	if(num==0){
		cout<<"\nLa suma de factoriales es: 1";
	}
	
	else{
		for(int i=1; i<=num; i++){
			fac=fac*i;
			sum=sum+fac;
		}
		cout<<"\nLa suma de factoriales es: "<<sum;
	}
	
	
	return 0;
}
