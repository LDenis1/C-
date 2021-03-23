#include <iostream>
#include <conio.h>

int n1,fact=1;

using namespace std;

main(){
	
	
	cout<<"Ingresa un numero: ";
   cin>>n1;
   
   
   if(n1<0){
   				fact =0;
   			} 
   
   else if(n1==0){
   	fact=0;
   } 
   else{
      for (int i = 1; i <= n1; i++){
         fact = fact*i;
      }
   }
 
 		cout<<" El Factorial de "<< n1<< " es: " << fact << endl;
	
}
