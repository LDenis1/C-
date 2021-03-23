#include <iostream>
#include <conio.h>
#include <math.h>

float a,b, result;

using namespace std;
main(){
	cout<<"Ingresa el primer cateto"<<endl;
	cin>>a;
	cout<<"Ingresa el segundo cateto"<<endl;
	cin>>b;
	
	
	
	result=(pow(a,2)+pow(b,2));
	

	cout<<"La longitud de la hipotenusa es: "<<result;
	
}
