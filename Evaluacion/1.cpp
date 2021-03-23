#include <iostream>
#include <locale.h>

char nombre[10], apellido[10];
int year,edad;

int date=2021;

using namespace std;

main(){
	setlocale(LC_CTYPE, "Spanish");
	
	cout<<"Ingresa tu nombre"<<endl;
	cin>>nombre;
	cout<<"Ingresa tu apellido"<<endl;
	cin>>apellido;
	cout<<"Ingresa tu año de nacimiento"<<endl;
	cin>>year;
	
	
	edad=date-year;
	year=year+75;
	
	
	cout<<"Hola "<<nombre<<" "<<apellido<<" este año cumples "<<edad<<" y cumpliras 75 años en el año "<<year;

}


