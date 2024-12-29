//Nombre: D�as de los meses
//Autor: Anah� Montserrat V�zquez Padilla
//Fecha: 26/02/2022

#include <iostream>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int mes;
	
	cout<<"Ingrese el n�mero del mes que desee:\n\n";
	
	cout<<"\tMeses\n";
	cout<<"[1] Enero\n";
	cout<<"[2] Febrero\n";
	cout<<"[3] Marzo\n";
	cout<<"[4] Abril\n";
	cout<<"[5] Mayo\n";
	cout<<"[6] Junio\n";
	cout<<"[7] Julio\n";
	cout<<"[8] Agosto\n";
	cout<<"[9] Septiembre\n";
	cout<<"[10] Octubre\n";
	cout<<"[11] Noviembre\n";
	cout<<"[12] Diciembre\n\n";
	
	cin>>mes;
	cout<<"\n";
	
	if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
		cout<<"El mes " <<mes<< ", tiene 31 d�as";
	}
	
	else{
		if(mes==4 || mes==6 || mes==9 || mes==11){
			cout<<"El mes " <<mes<< ", tiene 30 d�as";
		}
		else{
			if (mes==2){
				cout<<"El mes " <<mes<< ", tiene 28 d�as";
			}
			else{
				cout<<"ERROR, mes inexistente.";
			}	
		}
	}

	return 0;
}
