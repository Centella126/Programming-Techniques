//Nombre: Nombre con char
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 18/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	char nombre [20];
	
	cout<<"¿Cómo te llamas? ";
	cin>>nombre;
	
	cout<<"Hola "<<nombre <<", ¿cómo estás?";
	
	return 0;
}
