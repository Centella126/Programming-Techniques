//Nombre: Ascendente y descendente
//Autor: Anah� Montserrat V�zquez Padilla
//Fecha: 25/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");

	int a, b, c;
	
	cout<<"Ingrese tres n�meros\n";
	cin>>a >>b >>c;
	cout<<"\n\n";
	
	if (a>b && a>c){
		if (b>c){
			cout<<"N�mero ascendentes "<<a <<b <<c;
			cout<<"\n\n";
			cout<<"N�mero descendentes "<<c <<b <<a;
		}
		else{
			cout<<"N�mero ascendentes "<<a <<c <<b;
			cout<<"\n\n";
			cout<<"N�mero descendentes "<<b <<c <<a;
		}	
	}
	else if (b>a && b>c){
		if (a>c){
			cout<<"N�mero ascendentes "<<b <<a <<c;
			cout<<"\n\n";
			cout<<"N�mero descendentes "<<c <<a <<b;
		}
		else{
			cout<<"N�mero ascendentes "<<b <<c <<a;
			cout<<"\n\n";
			cout<<"N�mero descendentes "<<a <<c <<b;
		}
	}
	
	else if (c>a && c>b){
		if (a>b){
			cout<<"N�mero ascendentes "<<c <<a <<b;
			cout<<"\n\n";
			cout<<"N�mero descendentes "<<b <<a <<c;
		}
		else{
			cout<<"N�mero ascendentes "<<c <<b <<a;
			cout<<"\n\n";
			cout<<"N�mero descendentes "<<a <<b <<c;
		}
	}
	

	return 0;
}
