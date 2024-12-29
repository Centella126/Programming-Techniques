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

int serie_numerica();

int abc();

int tiempo();

int diferencia();

int piramide();

int rombo();

int km_m();

int area();

int valor_y();

int valor_m();

int area_radio();

int pascal();

int ec_cuad();

int main() 
{
	setlocale(LC_ALL, "spanish");
	
	system("cls");
	int op;
	
	cout<<"<<M E N Ú>>\n";
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
	cout<<"\n[13] Serie_numerica";
	cout<<"\n[14] Abecedario";
	cout<<"\n[15] Conversión tiempo";
	cout<<"\n[16] Diferencia de años";
	cout<<"\n[17] Pirámide de números";
	cout<<"\n[18] Rombo de números";
	cout<<"\n[19] Conversión km a m y viceversa";
	cout<<"\n[20] Área del círculo y triángulo";
	cout<<"\n[21] y=a+bc+0.5dc^2";
	cout<<"\n[22] m=(w^2-x^2)/(2(y-z))";
	cout<<"\n[23] Área o radio del círculo";
	cout<<"\n[24] Triángulo de Pascal";
	cout<<"\n[25] Ecuación cuadrática";
	cout<<"\n[26] Salir";	
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
			serie_numerica();
		break;
		
		case 14:
			abc();
		break;	
		
		case 15:
			tiempo();
		break;	
		
		case 16:
			diferencia();	
		break;	
		
		case 17:
			piramide();
		break;	
		
		case 18:
			rombo();
		break;				
			
		case 19:
			km_m();
		break;
		
		case 20:
			area();
		break;
		
		case 21:
			valor_y();
		break;
		
		case 22:
			valor_m();
		break;
		
		case 23:
			area_radio();
		break;
		
		case 24:
			pascal();
		break;
		
		case 25:
			ec_cuad();
		break;
		
		case 26:
			exit(0);
		break;	
		
		default:
			cout<<"Error, opcion invalida\n\n";
			system("pause");
			main();
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

int serie_numerica(){
	int res=1, n=0, i=1;
	float serie=0;
	
	while(res==1){	
		i=1;
		serie=0;
		system("cls");
		
		cout<<"Serie numerica: 2, 5, 10, 17 y asi\n\n";
		cout<<"Ingrese el numero de sucesion hasta el que quiera conocer: ";
		cin>>n;
	
		while(i<=n){
			serie=pow(i,2)+1;
			cout<<serie<<endl;	
			
			i++;		
		}

	
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}

int abc(){
	int res=1, i=1;
	
	while(res==1){	
		float serie=0;
		system("cls");
		
		cout<<"Abecedario en minúsculas\n\n";
		
		char i='a';
		
		while(i<='z'){
			cout<<i<<"\n";
			i++;
		}
		
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}

int tiempo(){
	int res=1, min;
	float horas, seg;
	
	while(res==1){	
		system("cls");
		
		cout<<"Conversión de tiempo\n\n";
		cout<<"Ingrese el tiempo en segundos: ";
		cin>>seg;
		
		horas=seg/3600;
		min=seg/60;
		
		cout<<"Segundos - "<<seg<<endl<<"Minutos - "<<min<<endl<<"Horas - "<<horas<<endl;

		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}

int diferencia(){
	int res=1, act, cual, dif;
	
	while(res==1){
		system("cls");
		
		cout<<"Diferencia de años\n\n";
		cout<<"Ingrese el año actual: ";
		cin>>act;
		cout<<"\nIngrese un año cualquiera: ";
		cin>>cual;
		
		dif=act-cual;
		
		if(dif<0){
			dif=dif*-1;
		}
		
		cout<<"\n\nLa diferencia entre "<<act<<" y "<<cual<<" es de: "<<dif<<" años.";
		
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}

int piramide(){
	int n, res=1;
	
	while(res==1){
		system("cls");
		
		cout<<"Piramide\n\n";
		cout<<"\nIngrese la base: ";
		cin>>n;
		
		for(int i=1; i<=n; i++){
			for(int esp=n; esp>=i; esp--){
				cout<<" ";	
			}
			cout<<i;
			
			for(int mitadtrian = i-1; mitadtrian > 0; mitadtrian --){
				cout<<mitadtrian;
			}
			
			for(int mitadtrian2 = 2; mitadtrian2 <= i; mitadtrian2 ++){
				cout<<mitadtrian2;
			}				

			cout<<endl;
		}
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();		
}

int rombo(){
	int n, res=1;
	
	while(res==1){
		system("cls");
		
		cout<<"Rombo de números\n\n";
		cout<<"Ingrese la base: ";
		cin>>n;
		
		for(int i=1; i<=n; i++){
			for(int esp=n; esp>=i; esp--){
				cout<<" ";
			}
			
			cout<<i;

			for(int mitadtrian = i-1; mitadtrian > 0; mitadtrian--){
				cout<<mitadtrian;
			}			
		
			for(int mitadtrian2 = 2; mitadtrian2 <= i; mitadtrian2++){
				cout<<mitadtrian2;
			}		
			
			cout<<endl;
		}
		
		for(int i=n-1; i>=1; i--){
			for(int esp=n; esp>=i; esp--){
				cout<<" ";
			}
			
			cout<<i;

			for(int mitadtrian = i-1; mitadtrian > 0; mitadtrian--){
				cout<<mitadtrian;
			}			
		
			for(int mitadtrian2 = 2; mitadtrian2 <= i; mitadtrian2++){
				cout<<mitadtrian2;
			}		
			
			cout<<endl;
		}		
		
		cout<<"\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}

int km_m(){
	int res=1, op;
	float a;
	
	while(res==1){
		system("cls");
		
		cout<<"Conversión km a m y viceversa\n\n";
		cout<<"<<M E N Ú>>";
		cout<<"\n[1] km - m";
		cout<<"\n[2] m - km";
		cout<<"\n\nElija una opción: ";
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"\n\nkm - m\n\n";
				cout<<"Ingrese los kilómetros: ";
				cin>>a;
				
				cout<<"\n\nEl equivalente de "<<a<<" km es "<<a*1000<<" metros";
			break;
			
			case 2:
				cout<<"\n\nm - km\n\n";
				cout<<"Ingrese los metros: ";
				cin>>a;
				
				cout<<"\n\nEl equivalente de "<<a<<" m es "<<a/1000<<" kilómetros";
				
			break;
						
			default:
				cout<<"\nError, opción inválida\n\n";
				system("pause");
				km_m();
			break;
		}		
		
		cout<<"\n\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}

int area(){
	int res=1, op;
	float r, a, b, h;
	
	while(res==1){
		system("cls");
		
		cout<<"Áreas\n\n";
		cout<<"¿Qué área desea calcular?\n\n";
		cout<<"[1] Círculo\n";
		cout<<"[2] Triángulo\n\n";
		cout<<"Elija una opción: ";
		cin>>op;
						
		switch(op){
			case 1:
				cout<<"\n\nIngrese el radio: ";
				cin>>r;
				
				a=3.14*pow(r,2);
				
				cout<<"\nEl área del círculo es "<<a;
			break;
			
			case 2:
				cout<<"\n\nIngrese la base: ";
				cin>>b;
				cout<<"\nIngrese la altura: ";
				cin>>h;
				
				a=(b*h)/2;
				
				cout<<"\n\nEl área del tríangulo es "<<a;
			break;
			
			default:
				cout<<"\n\nError, opción inválida";
			break;
		}
		
		cout<<"\n\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();
}

int valor_y(){
	int res=1;
	float a, b, c, d, y;
	
	while(res==1){
		system("cls");
		
		cout<<"y=a+bc+0.5dc^2\n\n";
		cout<<"Ingrese el valor de a: ";
		cin>>a;
		cout<<"\nIngrese el valor de b: ";
		cin>>b;
		cout<<"\nIngrese el valor de c: ";
		cin>>c;
		cout<<"\nIngrese el valor de d: ";
		cin>>d;
		
		y=a+(b*c)+(0.5*d*(pow(c,2)));
		
		cout<<"\n\nEl valor de y es "<<y;
		
		cout<<"\n\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();		
}

int valor_m(){
	int res=1;
	float w, x, y, z, m;
	
	while(res==1){
		system("cls");
		
		cout<<"m=(w^2-x^2)/(2(y-z))\n\n";
		cout<<"Ingrese el valor de w: ";
		cin>>w;
		cout<<"\nIngrese el valor de x: ";
		cin>>x;
		cout<<"\nIngrese el valor de y: ";
		cin>>y;
		cout<<"\nIngrese el valor de z: ";
		cin>>z;
		
		m=((pow(w,2))-(pow(x,2)))/((2*y)-(2*z));
		
		cout<<"\n\nEl valor de y es "<<m;
		
		cout<<"\n\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();	
}

int area_radio(){
	int res=1, op;
	float a, r, resul;
	
	while(res==1){
		system("cls");
		
		cout<<"Área o radio del círculo\n\n";
		cout<<"¿Qué desea calcular?\n\n";
		cout<<"[1] Área\n";
		cout<<"[2] Radio\n\n";
		cout<<"Elija una opción: ";
		cin>>op;
						
		switch(op){
			case 1:
				cout<<"\n\nIngrese el radio: ";
				cin>>r;
				
				resul=3.14*pow(r,2);
				
				cout<<"\nEl área del círculo es "<<resul;
			break;
			
			case 2:
				cout<<"\n\nIngrese el área: ";
				cin>>a;
				
				resul=pow((a/3.14),0.5);
				
				cout<<"\n\nEl radio del círculo es "<<resul;
			break;
			
			default:
				cout<<"\n\nError, opción inválida";
			break;
		}
	
		cout<<"\n\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();	
}

int pascal(){
	int res=1, n, p;
	
	while(res==1){
		system("cls");
		
		cout<<"Triángulo de Pascal\n\n";
		cout<<"Hasta que fila desea que llegue: ";
		cin>>n;
		
		for(int i=1; i<=n; i++){
			p=1;
			
			for(int esp=n; esp>=i; esp--){
				cout<<" ";
			}
			
			for(int j=1; j<=i; j++){
				cout<<p<<" ";
				p=p*(i-j)/j;
			}			
			
			cout<<endl;
		}		
		
		cout<<"\n\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();	
}

int ec_cuad(){
	int res=1;
	float a, b, c, x1, x2;
	
	while(res==1){
		system("cls");
		
		cout<<"Ecuación cuadrática\n\n";		
		cout<<"Ingrese el valor de a: ";
		cin>>a;
		cout<<"\nIngrese el valor de b: ";
		cin>>b;
		cout<<"\nIngrese el valor de c: ";
		cin>>c;
		
		x1=(-b+(pow(((b*b)-(4*a*c)),0.5)))/(2*a);
		x2=(-b-(pow(((b*b)-(4*a*c)),0.5)))/(2*a);
		
		cout<<"\n\nLas raíces son: "<<endl<<"X1= "<<x1<<endl<<"X2= "<<x2;
		
		cout<<"\n\n\nPresione [1] si desea realizarlo de nuevo: ";
		cin>>res;
	}
	main();	
}
