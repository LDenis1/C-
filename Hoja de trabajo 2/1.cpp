#include <iostream>
#include <conio.h>
#include <math.h>

float r,A,V;
int opcion;
	
float pi=3.1416;

using namespace std;

main(){
	
	cout<<"Ingresa el radio de la esfera"<<endl;
	cin>>r;
	
	system("CLS");
	cout<<"Que deseas ver¿"<<endl;
	cout<<"1. El Area"<<endl;
	cout<<"2. El Volumen"<<endl;
	cin>> opcion;
	switch (opcion)
		{
			case 1:
				A= (4*pi*pow(r,2));
				system("CLS");
				cout<<"Haz seleccionado el area"<<endl;
				cout<<"El area es: "<<A;
			
			break;
			
			case 2:
				V= (1.33*pi*pow(r,3));
			
				cout<<"Haz seleccionado el Volumen"<<endl;
				cout<<"El volumen es: "<<V;
			
			break;
			
			default:
			
				cout<<"Selecionaste una opcion incorrecta";
				
	
		}
}
