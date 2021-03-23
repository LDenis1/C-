#include <iostream>
#include <conio.h>

int years,sueldo,porcentaje;
char nombre[30];
float aumento,sueldoConAumento;
using namespace std;

int main(){
	cout<<"Ingresa tu nombre: "<<endl;
	cin>>nombre;
	cout<<"Ingresa tus años laborados:"<<endl;
	cin>>years;
	cout<<"Ingresa tu sueldo:"<<endl;
	cin>>sueldo;
	
	if (sueldo>=25000){
		aumento= 0;
		porcentaje=0;
		sueldoConAumento=aumento;
	}
	
	if (years<3){
		aumento= sueldo*0.05;
		porcentaje=5;
		sueldoConAumento=aumento+sueldo;
	}
	else if ((years>=3) && (years<5)){
		aumento= sueldo*0.15;
		porcentaje=15;
		sueldoConAumento=aumento+sueldo;
	}
	else if ((years>=5) && (years<8)){
		aumento= sueldo*0.20;
		porcentaje=20;
		sueldoConAumento=aumento+sueldo;
	}
	else if (years>8){
		aumento= sueldo*0.25;
		porcentaje=25;
		sueldoConAumento=aumento+sueldo;
	}
	
	cout<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Antiguedad="<<years<<endl;
	cout<<"Sueldo Actual="<<sueldo<<endl;
	cout<<"Porcentaje de aumento= "<<porcentaje<<"%"<<endl;
	cout<<"Aumento="<<aumento<<endl;
	cout<<"Sueldo con Aumento="<<sueldoConAumento<<endl;
	
}
