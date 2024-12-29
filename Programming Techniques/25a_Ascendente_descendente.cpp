//Nombre: Ascendente y descendente
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 25/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");

	int a, b, c;
	
	cout<<"Ingrese tres números\n";
	cin>>a >>b >>c;
	cout<<"\n\n";
	
	if (a>b && a>c){
		if (b>c){
			cout<<"Número ascendentes "<<a <<b <<c;
			cout<<"\n\n";
			cout<<"Número descendentes "<<c <<b <<a;
		}
		else{
			cout<<"Número ascendentes "<<a <<c <<b;
			cout<<"\n\n";
			cout<<"Número descendentes "<<b <<c <<a;
		}	
	}
	else if (b>a && b>c){
		if (a>c){
			cout<<"Número ascendentes "<<b <<a <<c;
			cout<<"\n\n";
			cout<<"Número descendentes "<<c <<a <<b;
		}
		else{
			cout<<"Número ascendentes "<<b <<c <<a;
			cout<<"\n\n";
			cout<<"Número descendentes "<<a <<c <<b;
		}
	}
	
	else if (c>a && c>b){
		if (a>b){
			cout<<"Número ascendentes "<<c <<a <<b;
			cout<<"\n\n";
			cout<<"Número descendentes "<<b <<a <<c;
		}
		else{
			cout<<"Número ascendentes "<<c <<b <<a;
			cout<<"\n\n";
			cout<<"Número descendentes "<<a <<b <<c;
		}
	}
	

	return 0;
}
