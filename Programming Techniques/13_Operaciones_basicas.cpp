//Nombre: Menú de operaciones básicas
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 12/02/2022

#include <iostream>
#include <stdlib.h>

using namespace std;


int main() 
{
	float num1=0, num2=0, resul=0;
	int opc=0;
	
	cout<<"\t\tOperaciones entre dos numeros con punto decimal";
	cout<<"\nIntroduce el primer valor: ";
	cin>>num1;
	cout<<"\nIntroduce el segundo valor: ";
	cin>>num2;
	
	cout<<"\tMenu\n";
	cout<<"[1] Suma\n";
	cout<<"[2] Resta\n";
	cout<<"[3] Multiplicacion\n";
	cout<<"[4] Division\n";
	
	cout<<"\nElija una opcion: \n";
	cin>>opc;
	cout<<"\n";
	
	if (opc==1){
		system("cls");
		resul=num1+num2;
		cout<<"\n\n\tEl resultado de la suma es: "<<resul<<"\n\n";
	}
	
	if (opc==2){
		system("cls");
		resul=num1-num2;
		cout<<"\n\n\tEl resultado de la resta es: "<<resul<<"\n\n";
	}
	
	if (opc==3){
		system("cls");
		resul=num1*num2;
		cout<<"\n\n\tEl resultado de la multiplicacion es: "<<resul<<"\n\n";
	}
	
	if (opc==4){
		system("cls");
		resul=num1/num2;
		cout<<"\n\n\tEl resultado de la division es: "<<resul<<"\n\n";
	}
	
	if ((opc!=1) && (opc!=2) && (opc!=3) && (opc!=4)){
		system("cls");
		cout<<"\n\n\tError, opcion invalida\n\n";
	}
	
	return 0;
}
