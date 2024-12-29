//Nombre: Conversiones
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 01/04/2022

#include <iostream>

using namespace std;

int main(){
	
	int num,op,a;;
	float conver;
	
	
	cout<<"<<Menu de conversiones>>";
	cout<<"\n\n[1] cm a in";
	cout<<"\n\n[2] lb a kg";
	cout<<"\n\n[3] m a ft";
	cout<<"\n\n[4] lt a ml";
	cout<<"\n\n[5] gal a l";
	cout<<"\n\n[6] mm a cm";
	cout<<"\n\n[7] km a m";
	cout<<"\n\n\nElija una opcion: ";
	cin>>num;
	
	switch(num){
		case 1:
			
			cout<<"\nIngrese un numero: ";
			cin>>a; 
			
			cout<<"\n[1] cm a in";
			cout<<"\n[2] viceversa";
			cout<<"\n\nDigite una opcion: ";
			cin>>op;
			
			if(op==1){
				conver=a/2.54;
				cout<<"\nla conversion es: "<<conver;
			}
			else if(op==2){
				conver=a*2.54;
				cout<<"\nla conversion es: "<<conver;
			}
			break;
		
		case 2:

			cout<<"\nIngrese un numero: ";
			cin>>a; 
			
			cout<<"\n[1] lb a kg";
			cout<<"\n[2] viceversa";
			cout<<"\n\nDigite una opcion: ";
			cin>>op;
			
			if(op==1){
				conver=a/2.205;
				cout<<"\nla conversion es: "<<conver;
			}
			else if(op==2){
				conver=a*2.205;
				cout<<"\nla conversion es: "<<conver;
			}
			break;
			
		case 3:
			
			cout<<"\nIngrese un numero: ";
			cin>>a; 
			
			cout<<"\n[1] m a ft";
			cout<<"\n[2] viceversa";
			cout<<"\n\nDigite una opcion: ";
			cin>>op;
			
			if(op==1){
				conver=a*3.281;
				cout<<"\nla conversion es: "<<conver;
			}
			else if(op==2){
				conver=a/3.281;
				cout<<"\nla conversion es: "<<conver;
			}
			break;
			
		case 4:
			
			cout<<"\nIngrese un numero: ";
			cin>>a; 
			
			cout<<"\n[1] lt a ml";
			cout<<"\n[2] viceversa";
			cout<<"\n\nDigite una opcion: ";
			cin>>op;
			
			if(op==1){
				conver=a*1000;
				cout<<"\nla conversion es: "<<conver;
			}
			else if(op==2){
				conver=a/1000;
				cout<<"\nla conversion es: "<<conver;
			}
			break;
		
		case 5:
			
			cout<<"\nIngrese un numero: ";
			cin>>a; 
			
			cout<<"\n[1] gal a lt";
			cout<<"\n[2] viceversa";
			cout<<"\n\nDigite una opcion: ";
			cin>>op;
			
			if(op==1){
				conver=a*3.785;
				cout<<"\nla conversion es: "<<conver;
			}
			else if(op==2){
				conver=a/3.785;
				cout<<"\nla conversion es: "<<conver;
			}
			break;
			
		case 6:
			
			cout<<"\nIngrese un numero: ";
			cin>>a; 
			
			cout<<"\n[1] mm a cm";
			cout<<"\n[2] viceversa";
			cout<<"\n\nDigite una opcion: ";
			cin>>op;
			
			if(op==1){
				conver=a/10;
				cout<<"\nla conversion es: "<<conver;
			}
			else if(op==2){
				conver=a*10;
				cout<<"\nla conversion es: "<<conver;
			}
			break;
		
		case 7:
			
			cout<<"\nIngrese un numero: ";
			cin>>a; 
			
			cout<<"\n[1] km a m";
			cout<<"\n[2] viceversa";
			cout<<"\n\nDigite una opcion: ";
			cin>>op;
			
			if(op==1){
				conver=a*1000;
				cout<<"\nla conversion es: "<<conver;
			}
			else if(op==2){
				conver=a/1000;
				cout<<"\nla conversion es: "<<conver;
			}
			break;	
			
		default:
			cout<<"opcion incorrecta";
			break;
	}
		
	return 0;
}
