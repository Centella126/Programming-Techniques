//Nombre: N�mero par
//Autor: Anah� Montserrat V�zquez Padilla
//Fecha: 11/02/2022

#include <iostream>

using namespace std;

int main() 
{
	int numero;
	
	cout<<"\nIntroduce un n�mero: ";
	cin>>numero;
	cout<<"\n";
	
	if (numero % 2==0){
		cout<<"El n�mero que introdujiste es PAR";
	}
	
	if (numero % 2!=0){
		cout<<"El n�mero que introdujiste NO ES PAR";
	}
	
	return 0;
}
