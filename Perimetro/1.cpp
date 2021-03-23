#include <iostream>
#include <stdio.h>


float r, p, a;

using namespace std;

main(){
	
 cout<<"Ingresa el radio del circulo:";
 cin>>r;
 p= 6.28*r;
 a=3.1416*r*r;
 
 cout<<"El perimetro del circulo es:"<<p<<" y el area es:"<<a<<endl;
 
 
 printf("El perimetro del circulo es: %.2f y el area es: %.2f",p,a);
 
 
return 0;
}
