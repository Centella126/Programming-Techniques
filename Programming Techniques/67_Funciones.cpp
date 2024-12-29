//Nombre: Funciones
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 29/04/2022

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

void bienvenidos();

int suma();
int suma2(int a, int b){
	return a+b;
}

int resta();
int resta2(int a,int b){
	return a-b;
}

int multiplicacion();
int multiplicacion2(int a,int b){
	return a*b;
}

int division();
float division2(float a, float b){
	return a/b;
}

int potencia();
float potencia2(float a, float b){
	return pow (a,b);
}

int ser_o_no_ser();

int dias_mes();

int fibonacci();

int factorial();

int par_impar();

int uno_cien();

int main() 
{
	setlocale(LC_ALL, "spanish");
	
	system("cls");
	int op;
	
	cout<<"<<M E N Ú>>";
	cout<<"\n[1] Hola";
	cout<<"\n[2] Suma";
	cout<<"\n[3] Resta";
	cout<<"\n[4] Multiplicación";
	cout<<"\n[5] División";	
	cout<<"\n[6] Potencia";	
	cout<<"\n[7] ¿Es un número?";
	cout<<"\n[8] Días según el mes";
	cout<<"\n[9] Fibonacci";
	cout<<"\n[10] Factoriales";
	cout<<"\n[11] Par_Impar";
	cout<<"\n[12] Uno_cien";
	cout<<"\n[13] Salir";	
	cout<<"\n\nElija una opción: ";
	cin>>op;
	cout<<endl;
	
	switch(op){
		case 1:
			bienvenidos();
		break;
		
		case 2:
			suma();
		break;
		
		case 3:
			resta();
		break;
		
		case 4:
			multiplicacion();
		break;
		
		case 5:
			division();
		break;	
		
		case 6:
			potencia();
		break;
		
		case 7:
			ser_o_no_ser();
		break;

		case 8:
			dias_mes();
		break;

		case 9:
			fibonacci();
		break;

		case 10:
			factorial();
		break;

		case 11:
			par_impar();
		break;
		
		case 12:
			uno_cien();
		break;
		
		case 13:
			exit(0);
		break;	
		
		default:
			cout<<"Error, opcion invalida";
		break;
	}
}

void bienvenidos (){
	cout<<"\n\nHola de nuevo a Tecnicas de programacion\n\n";
	
	system("pause");
	main();
}

int suma(){
	int a, b, res=1;
	
	while(res==1){
		system("cls");
		
		cout<<"Suma";
		cout<<"\nIngresa el primer valor: ";
		cin>>a;
		cout<<"\nIngresa el segundo valor: ";
		cin>>b;
		cout<<"\n\nEl resultado de la suma es: "<<suma2(a,b);
	
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}

int resta(){
	int a, b, res=1;

	while(res==1){
		system("cls");
		
		cout<<"Resta";
		cout<<"\nIngresa el primer valor: ";
		cin>>a;
		cout<<"\nIngresa el segundo valor: ";
		cin>>b;
		cout<<"\n\nEl resultado de la resta es: "<<resta2(a,b);
		
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;		
	}
	main();
}

int multiplicacion(){
	int a, b, res=1;

	while(res==1){
		system("cls");	

		cout<<"Multiplicacion";
		cout<<"\nIngresa el primer valor: ";
		cin>>a;
		cout<<"\nIngresa el segundo valor: ";
		cin>>b;
		cout<<"\n\nEl resultado de la multiplicacion es: "<<multiplicacion2(a,b);
	
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}

int division(){
	float a, b, res=1;

	while(res==1){	
		system("cls");
		
		cout<<"Division";
		cout<<"\nIngresa el primer valor: ";
		cin>>a;
		cout<<"\nIngresa el segundo valor: ";
		cin>>b;
		cout<<"\n\nEl resultado de la division es: "<<division2(a,b);
	
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}

int potencia(){
	float a, b, res=1;

	while(res==1){	
		system("cls");
		
		cout<<"Potencia";
		cout<<"\nIngresa el numero base: ";
		cin>>a;
		cout<<"\nIngresa el exponente: ";
		cin>>b;
		cout<<"\n\nEl resultado de la potencia es: "<<potencia2(a,b);
	
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}

int ser_o_no_ser(){
	int res=1;
	string c;
	
	while(res==1){	
		system("cls");
		
		cout<<"Es numero?";
		cout<<"\nIngresa un UNICO caracter: ";
		cin>>c;
				
		if(c=="0" || c=="1" || c=="2" || c=="3" || c=="4" || c=="5" || c=="6" || c=="7" || c=="8" || c=="9"){
			cout<<"\n\nEl caracter ES un NUMERO";
		}
		else{
			cout<<"\n\nEl caracter NO es un NUMERO";
		}
	
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}
	
int dias_mes(){
	int mes, res=1;
	
	while(res==1){	
		system("cls");
		
		cout<<"Dias segun el mes";
		cout<<"\n\nIngresa un numero que corresponda a un mes (1 -> enero): ";
		cin>>mes;
				
		if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
			cout<<"\nEl mes " <<mes<< ", tiene 31 días";
		}
		
		else{
			if(mes==4 || mes==6 || mes==9 || mes==11){
				cout<<"\nEl mes " <<mes<< ", tiene 30 días";
			}
			else{
				if (mes==2){
					cout<<"\nEl mes " <<mes<< ", tiene 28 días";
				}
				else{
					cout<<"\nERROR, mes inexistente.";
				}	
			}
		}
	
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}

int fibonacci(){
	int n, a=0, b=1, resul=0, res=1;
	
	while(res==1){	
		int a=0, b=1, resul=0;
	
		system("cls");
		
		cout<<"Secuencia Fibonacci";
		cout<<"\n\nIngresa el numero de la secuencia: ";
		cin>>n;
				
		for(int i=1; i<=n; i++){
			cout<<resul<<endl;
			resul=a+b;
			b=a;
			a=resul;
		}
	
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}

int factorial(){
	int num=0, fac=1, res=1;
	
	while(res==1){	
		int fac=1;
	
		system("cls");
		
		cout<<"Numeros factoriales";
		cout<<"\n\nIngresa un numero: ";
		cin>>num;

		if(num==0){
			cout<<"\nEl factorial de 0 es: 1";
		}
		
		else{
			for(int i=num; i>=1; i--){
				fac=fac*i;
			}
			cout<<"\nEl factorial de "<<num<<" es: "<<fac;
		}
	
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}

int par_impar(){
	int num=0, res=1;
	
	while(res==1){	
		system("cls");
		
		cout<<"Pares e impares";
		cout<<"\n\nIngresa un número: ";
		cin>>num;

		if(num==0){
			cout<<"El número es CERO";			
		}
		if(num%2==0 && num!=0){
			cout<<"\nEl número es PAR";
		}
		
		if(num%2!=0){
			cout<<"\nEl número es IMPAR";
		}
	
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}	

int uno_cien(){
	int res=1;
	
	while(res==1){	
		system("cls");
		
		cout<<"Números del 1 al 100\n\n";

		for(int i=1, j=2, k=3, l=4, m=5, n=6, o=7, p=8, q=9, r=10; i<=100, j<=100, k<=100, l<=100, m<=100, n<=100, o<=100, p<=100, q<=100, r<=100; i=i+10, j=j+10, k=k+10, l=l+10, m=m+10, n=n+10, o=o+10, p=p+10, q=q+10, r=r+10){
			cout<<i<<"\t"<<j<<"\t"<<k<<"\t"<<l<<"\t"<<m<<"\t"<<n<<"\t"<<o<<"\t"<<p<<"\t"<<q<<"\t"<<r<<endl;
		}
	
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}
