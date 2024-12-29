//Nombre: Cantidad de energía y su tasa a pagar
//Autor: Anahí Montserrtat Vázquez Padilla
//Fecha: 11/02/2022

#include <iostream>

using namespace std;


int main() 
{
	float energia=0, pago=0;
	
	cout<<"Favor de introducir el gasto de energía que tuvo :"; 
	cin>>energia;
	cout<<"\n";
	
	if (energia>0 & energia<1000){
		cout<<"Su tasa a pagar es de 1.5\n";
		pago=energia*1.5;
		cout<<"El monto total a pagar es de: "<<pago<<"\n";
	}
	
	if (energia>=1000 & energia<=1900){
		cout<<"Su tasa a pagar es de 1.2\n";
		pago=energia*1.2;
		cout<<"El monto total a pagar es de: "<<pago<<"\n";
	}
	
	if (energia>1900){
		cout<<"Su tasa a pagar es de 0.9\n";
		pago=energia*0.9;
		cout<<"El monto total a pagar es de: "<<pago<<"\n";
	}
	
	if (energia<=0){
		cout<<"Error, introduzca un monto válido";
	}
	
	return 0;
}
