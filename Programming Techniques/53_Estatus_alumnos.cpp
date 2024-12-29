//Nombre: Reprobados o aprobados, esa es la cuestión
//Autora: Anahí Montserrat Vázquez Padilla
//Fecha: 20/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "spanish");
	
	float cal=0;
	int todos=0, uno=0, ultimo=0, a=0, b=0, c=0;
	
	cout<<"Se mostrará el número de alumnos que aprueban ciertos exámenes";
	
	for(int i=1; i<=5; i++){                                            //i es para el conteo de los 5 alumnos
		cout<<"\n\n\n<<Los resultados del alumno número "<<i<<">>";
		for(int j=1; j<=3; j++){                                        //j es para el conteo de los 3 exámenes
			cout<<"\n\nIngrese el resultado del examen "<<j<<"\t";
			cin>>cal;

			if(j==3 && a==-2 && cal>=6){
				b=1;													//para que no se confunda con otra condición
			}
			if(cal>=6){
				a++;
			}
			else{
				a--;
			}
		}
		
		if(a==3){
			todos++;
		}
		if(a>=-1 || b==1){
			uno++;
		}
		if(b==1){
			ultimo++;
		}
		
		a=0;
		b=0;
	}
	
	cout<<"\n\n\nAlumnos que aprobaron todos lo exámenes: "<<todos<<endl;
	cout<<"\nAlumnos que aprobaron al menos un examen: "<<uno<<endl;
	cout<<"\nAlumnos que aprobaron únicamente el último examen: "<<ultimo<<endl;
	
	return 0;
}
