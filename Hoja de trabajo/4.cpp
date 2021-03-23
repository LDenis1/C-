#include <iostream>
#include <conio.h>
#include <math.h>

float a,b,c;
float d, x1,x2;


using namespace std;
main(){
	cout<<"Ingresa el valor de a:"<<endl;
	cin>>a;
	cout<<"Ingresa el valor de b"<<endl;
	cin>>b;
	cout<<"Ingresa el valor de c"<<endl;
	cin>>c;
	
									
	x1= (-b + sqrt(pow(b,2)- (4*a*c)))/(2*a);				// Hay un error, puede que si la operacion llegase a buscar raiz cuadrada de un numero negativo, tirara el valor de "NAN"
	x2= (-b - sqrt(pow(b,2)-(4*a*c)))/(2*a);
		
	

	
	cout<<"El valor de x1 es:"<<x2<<endl;
	cout<<"El valor de x2 es:"<<x1;
		


	
}


