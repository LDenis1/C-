//Realizar un programa que solicite que tabla de multiplicar desea mostrar y muestre la tabla de multiplicar;
//al dar un enter solicite de nuevo que tabla desea mostrar y la muestre hasta que el usuario solicite
//mostrar la tabla del 0, muestre la tabla del 0 y salga del programa con el siguiente enter; al finalizar
//muestre cuantas tablas de multiplicar solicitó el usuario.

#include <iostream>
#include <conio.h>


using namespace std;
int n2;

int main(){
	
	int n1;
		
	n2=0;
	while (n1 !=0){
		
 		
	
	cout<<"\n Que tabla desea?"<<endl;
 			cin>>n1;	
 			n2=n2+1;
 			
 			
 			
		for(int i = 1; i <= 10; i++)
		{
			cout<<n1 <<" X "<<i <<" = "<<i*n1<<endl;
		} 		
 	
 		
 		
 		cout<<"\n Llevas "<<n2<<" Tablas solicitadas"<<endl;
 	} 
 	
 		
 
	
}
