//Nombre: Operaciones
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 01/04/2022

#include <iostream>

using namespace std;

int main(){
	
	float a, b, num;
	
	cout<<"Ingrese un numero: ";
	cin>>a;
	cout<<"\nIngrese otro numero: ";
	cin>>b;
	
	cout<<"\n\nMenu de operaciones: ";
	cout<<"\n[1] Suma";
	cout<<"\n[2] Resta";
	cout<<"\n[3] Multiplicacion";
	cout<<"\n[4] Division";
	cout<<"\n[5] Salir";
	cout<<"\n\nElija una opcion";
	cin>>num;
	
	switch(num){
	case 1:
		cout<<"\nLa suma de los numeros ingresados es: "<<a+b;
		break;
		
	case 2:
		cout<<"\nLa resta de los numeros ingresados es: "<<a-b;
		break;
		
	case 3:
		cout<<"\nLa multiplicacion de los numeros ingresados es: "<<a*b;
		break;
		
	case 4:
		cout<<"\nLa division de los numeros ingresados es: "<<a/b;
		break;
		
	case 5:
		cout<<"\n\Chao chao";
		break;
	
	default:
		cout<<"\nLa opcion es incorrecta";
	}
	
	return 0;
}
