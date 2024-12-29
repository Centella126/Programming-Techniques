//Nombre: Número par
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 11/02/2022

#include <iostream>

using namespace std;

int main() 
{
	int numero;
	
	cout<<"\nIntroduce un número: ";
	cin>>numero;
	cout<<"\n";
	
	if (numero % 2==0){
		cout<<"El número que introdujiste es PAR";
	}
	
	if (numero % 2!=0){
		cout<<"El número que introdujiste NO ES PAR";
	}
	
	return 0;
}
