//Nombre: Nombre con char
//Autor: Anah� Montserrat V�zquez Padilla
//Fecha: 18/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	char nombre [20];
	
	cout<<"�C�mo te llamas? ";
	cin>>nombre;
	
	cout<<"Hola "<<nombre <<", �c�mo est�s?";
	
	return 0;
}
