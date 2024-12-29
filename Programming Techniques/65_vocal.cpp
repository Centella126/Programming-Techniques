//Nombre: Vocales y consonantes
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 01/04/2022

#include <iostream>

using namespace std;

int main(){
	
	char letra;
	
	cout<<"Ingrese una letra: ";
	cin>>letra;
	
	switch (letra){
		case 'a' :
			cout<<"Es una vocal";
			break;
		case 'e':
			cout<<"Es una vocal";
			break;
		case 'i':
			cout<<"Es una vocal";
			break;
		case 'o':
			cout<<"Es una vocal";
			break;
		case 'u':
			cout<<"Es una vocal";
			break;
		
		default:
			cout<<"Es una consonante";
			break;
	}
	
	return 0;
}
