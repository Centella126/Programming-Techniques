//Nombre: A�os bisiestos
//Autor: Anah� Montserrat V�zquez Padilla
//Fecha: 26/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int ano;
	
	cout<<"Ingrese el a�o que desee: ";
	cin>>ano;
	cout<<"\n";
	
	if(ano%4==0){
		cout<<"El a�o " <<ano <<" es bisiesto";
	}
	else{
		cout<<"El a�o " <<ano <<" no es bisiesto";
	}
	
	return 0;
}
