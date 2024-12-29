//Nombre: Hora, edad y saludo
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 11/02/2022

#include <iostream>

using namespace std;

int main() 
{
	int edad,hora;
	
	cout<<"¿Que edad tienes?: ";
	cin>>edad;
	
	cout<<"¿Que hora es?: ";
	cin>>hora;
	cout<<"\n";
	
	if (edad >= 2 & edad <=17){
		if (hora >= 0 & hora <6){
			cout<<"Achis achis, no asuste mijo";
		}
		if (hora >= 6 & hora <12){
			cout<<"Buenos dias chamaco";
		}
		if (hora >=12 & hora <19){
			cout<<"Buenos tardes chamaco";
		}
		if (hora >19 & hora <24){
			cout<<"Buenos noches chamaco, a mimir";
		}
	}
	
	if (edad >= 18 & edad <=29){
		if (hora >= 0 & hora <12){
			cout<<"Buenos dias joven";
		}
		if (hora >=12 & hora <19){
			cout<<"Buenos tardes joven";
		}
		if (hora >19 & hora <24){
			cout<<"Buenos noches joven";
		}
	}
	
	if (edad >= 30 & edad <=69){
		if (hora >= 0 & hora <12){
			cout<<"Buenos dias seño";
		}
		if (hora >=12 & hora <19){
			cout<<"Buenos tardes seño";
		}
		if (hora >19 & hora <24){
			cout<<"Buenos noches señor";
		}
	}
	
	if (edad >= 70){
		if (hora >= 0 & hora <12){
			cout<<"Buenos dias viejon";
		}
		if (hora >=12 & hora <19){
			cout<<"Buenos tardes viejon";
		}
		if (hora >19 & hora <24){
			cout<<"Buenos noches viejon";
		}
	}
	
	return 0;
}
