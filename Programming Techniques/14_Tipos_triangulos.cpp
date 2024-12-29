//Nombre: Tipos de triángulos
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 14/02/2022

#include <iostream>

using namespace std;

int main() 
{
	float l1=0, l2=0, l3=0; //l-lado
	
	cout<<"Favor de ingresar sus magnitudes con las mismas unidades de medida\n\n";
	
	cout<<"\nIngrese la primer magnitud del triángulo: ";
	cin>>l1;
	cout<<"\nIngrese la segunda magnitud del triángulo: ";
	cin>>l2;
	cout<<"\nIngrese la primer magnitud del triángulo: ";
	cin>>l3;
	
	if (l1==l2 && l1==l3){
		cout<<"\n\nEl triángulo es Equilatero\n\n";
	}
	
	if ((l1==l2 && l1!=l3) || (l1==l3 && l1!=l2) || (l2==l3 && l2!=l1)){
		cout<<"\n\nEl triángulo es Isoceles\n\n";
	}
	
	if (l1!=l2 && l1!=l3 && l2!=l3){
		cout<<"\n\nEl triángulo es Escaleno\n\n";
	}
	
	return 0;
}
