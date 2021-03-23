#include <iostream>
#include <locale.h>

using namespace std;
int n1, edad;
char nombre[20];

int date= 2061;

main(){
	
	setlocale(LC_CTYPE, "Spanish");
	cout<<"Ingresa tu nombre:";
	cin>>nombre;
	cout<<"Ingresa el año en el que naciste"<<endl;
	cin>>n1;
	
	edad= date-n1;
	
	cout<<nombre<<" cuando pase el cometa Halley tendras:"<<edad<<"años"<<endl;
}
	
