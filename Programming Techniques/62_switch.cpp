//Nombre: Switch
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 01/04/2022

#include <iostream>

using namespace std;

int main() 
{
	int numero;
	
	cout<<"Que numero quieres en letras ";
	cin>>numero;
	
	switch (numero){
		case 1:
			cout<<"\t\t\n\nUNO";
			break;
		case 2:
			cout<<"\t\t\n\nDOS";
			break;
		case 3:
			cout<<"\t\t\n\nTRES";
			break;		
		case 4:
			cout<<"\t\t\n\nCUATRO";
			break;
		case 5:
			cout<<"\t\t\n\nCINCO";
			break;
				
		default:
			cout<<"\t\t\n\nEste numero no esta en mi lista ";
			break;
	}
	
	
	return 0;
}
