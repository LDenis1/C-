//Realizar un programa que muestre la suma, resta, multiplicación, división con su residuo y
//potenciación de dos números ingresados por el usuario

#include <iostream>
#include <conio.h>



int n1,n2;
float residuo,suma,resta,multiplicacion, division;

using namespace std;


int main(){
 	
 	cout<<"Ingrese el primer numero"<<endl;
 		cin>>n1;
 		
 	cout<<"Ingrese el segundo numero"<<endl;
 		cin>>n2;
 		
 		suma= n1+n2;
 		resta= n1-n2;
 		multiplicacion= n1*n2;
 		division= n1/n2;
 		residuo = n1 % n2;
 	
 	cout<<"Suma= "<<suma<<endl;
 	cout<<"Resta= "<< resta<<endl;
 	cout<<"Multiplicacion= "<<multiplicacion<<endl;
 	cout<<"Division= "<< division<<endl;
 	cout<<"Residuo= "<<residuo<<endl;
 
	
}
