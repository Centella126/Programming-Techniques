//Nombre: Patron con asteriscos-rombo
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 25/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int num=0;
	string respuesta="si";
	
	while(respuesta=="SI" || respuesta=="Si" || respuesta=="si"){
		cout<<"Digite el numero de renglones: ";
		cin>>num;
		
		for(int i=1; i<=num; i++){
			for(int j=num; j>=i;j--){
				cout<<" ";
			}
				
			for(int k=1; k<=i; k++){
				cout<<"*";
			}
			
			for(int l=2; l<=i; l++){
				cout<<"*";
			}	
			cout<<endl;
		}
		
		for(int i=num-1; i>=1; i--){
			for(int j=i; j<=num;j++){
				cout<<" ";
			}
				
			for(int k=1; k<=i; k++){
				cout<<"*";
			}
			
			for(int l=2; l<=i; l++){
				cout<<"*";
			}	
			cout<<endl;
		}
		cout<<"\n\n¿Quieres continuar? ";
		cin>>respuesta;
		num=0;
		system("cls");
	}

	return 0;
}
