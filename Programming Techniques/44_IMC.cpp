//Nombre: C�lculo IMC
//Autora: Anah� Montserrat V�zquez Padilla
//Fecha: 14/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	float imc=0, peso=0, estatura=0, bp=18.5, sp=25, ob=30, obm=40; //bp-bajo peso, sp-sobre peso, ob-obesidad, odm-obesidad morbida
	string respuesta="si", nombre;
	
	while(respuesta=="si" || respuesta=="Si" || respuesta=="SI"){
		
		cout<<"�C�al es tu nombre? ";
		cin>>nombre;
		cout<<endl<<"Mucho gusto "<<nombre<<" por favor, ingresa tu peso en kilogramos: ";
		cin>>peso;
		cout<<endl<<"Muy bien, ahora ingresa tu estatura en metros: ";
		cin>>estatura;
		
		imc=peso/(estatura*estatura);

		cout<<endl<<"Tu �ndice de masa corporal es de: "<<imc<<endl;

		if(imc<=bp){
			cout<<"Est� dentro del rango: Peso bajo";
		}
		else if(imc<=sp){
			cout<<"Est� dentro del rango: Peso normal";
		}
		else if(imc<=ob){
			cout<<"Est� dentro del rango: Sobre peso";
		}
		else if(imc<=obm){
			cout<<"Est� dentro del rango: Obesidad";
		}
		else{
			cout<<"Est� dentro del rango: Obesidad morbida";
		}
		
		cout<<endl<<endl<<"�Deseas realizar otro c�lculo? ";
		cin>>respuesta;
		system("cls");
	}
	
	cout<<"Hasta la vista baby";
	
	return 0;
}
