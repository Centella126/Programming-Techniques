//Nombre: Suma de potencias
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 29/03/2022

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int num, sum;
	float pot;
	string respuesta="si";
	
	while(respuesta=="SI" || respuesta=="Si" || respuesta=="si"){
		cout<<"Ingrese un número máximo para la potencia: ";
		cin>>num;
		
		for(int i=1; i<=num; i++){
			pot=pow(2,i);
			sum=sum+pot;
			
			cout<<"\n2^"<<i<<" = "<<pot<<endl;
		}
		cout<<"\nLa suma de los números elevados es: "<<sum;
		
		cout<<"\n\n¿Quieres continuar? ";
		cin>>respuesta;
		num=0;
		sum=0;
		pot=0;
		system("cls");
	}
	
	return 0;
}
