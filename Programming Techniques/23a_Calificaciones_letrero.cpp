//Nombre: Mensaje dependiendo de la calificaci�n
//Autor: Anah� Montserrat V�zquez Padilla
//Fecha: 18/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	float cal1=0, cal2=0, cal3=0, cal4=0, cal5=0, cal6=0, cal7=0, cal8=0, cal9=0, cal10=0, promedio = 0;
	
	cout<<"\tIngrese sus calificaciones que quiera que se promedien\n\n";
	
	cout<<"Ingrese la primera calificaci�n: ";
	cin>> cal1;
	cout<<"Ingrese la segunda calificaci�n: ";
	cin>> cal2;
	cout<<"Ingrese la tercera calificaci�n: ";
	cin>> cal3;
	cout<<"Ingrese la cuarta calificaci�n: ";
	cin>> cal4;
	cout<<"Ingrese la quinta calificaci�n: ";
	cin>> cal5;
	cout<<"Ingrese la sexta calificaci�n: ";
	cin>> cal6;
	cout<<"Ingrese la s�ptima calificaci�n: ";
	cin>> cal7;
	cout<<"Ingrese la octava calificaci�n: ";
	cin>> cal8;
	cout<<"Ingrese la novena calificaci�n: ";
	cin>> cal9;
	cout<<"Ingrese la d�cima calificaci�n: ";
	cin>> cal10;
		
	promedio = (cal1+cal2+cal3+cal4+cal5+cal6+cal7+cal8+cal9+cal10)/10;
	
	cout<<"\nObtuvo un promedio de "<<promedio<<"\n\n";
	
	if (promedio<6){
		cout<<"\nReprobado\n\n";
	}
	else if(promedio<7){
		cout<<"\nSuficiente\n\n";
	}
	else if(promedio<8){
		cout<<"\nBien\n\n";
	}
	else if(promedio<9){
		cout<<"\nMuy Bien\n\n";
	}
	else{
		cout<<"\nExcelente\n\n";
	}

	return 0;
}
