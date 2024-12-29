//Nombre: Promedio de números cuando aparezca un cero
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 18/03/2022

#include <iostream>

using namespace std;

int main() 
{
	int num=0, suma=0, i=0;
	float promedio;
	
	do{
		cout<<"Ingrese un numero: ";
		cin>>num;
		i++;
		suma=suma+num;
		
	}while(num!=0);
	
	i=i-1;
	
	promedio=suma/(i-1);
	
	cout<<"\nEl promedio de los "<<i<<" numeros ingresados es: "<<promedio;
	
	return 0;
}
