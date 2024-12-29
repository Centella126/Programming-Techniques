//Nombre: Menu del dia
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 01/04/2022

#include <iostream>

using namespace std;

int main() 
{
	int numero;
	
	cout<<"<<Menu del dia>>";
	cout<<"\n\n[1] Desayunos";
	cout<<"\n\n[2] Comida";
	cout<<"\n\n[3] Cena";
	
	cout<<"\n\nSelecciona un numero de opcion ";
	cin>>numero;
	
	switch (numero){
		case 1:
			cout<<"\n\nEmparedados de atun, licuado de frijoles, wafles con mostaza";
			break;
		case 2:
			cout<<"\n\nLentejas con chicharrones, hamburguesas de tofu, sopa con chipotle";
			break;
		case 3:
			cout<<"\n\nCereal con mazapan, pan duro, quesadillas con chimichurri";
			break;		
				
		default:
			cout<<"\t\t\n\nEste numero no esta en las opciones ";
			break;
	}
	
	
	return 0;
}
