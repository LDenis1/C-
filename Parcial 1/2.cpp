#include <iostream>
#include <conio.h>

int n1,n2, o=2,cont=0, divicont;




using namespace std;


main(){

	
	cout<<"Ingresa un numero:"<<endl;
 		cin>>n1;
 		
/////////////////////////////////////////////////////////////////////////////////// 		
 	cout<<" a) Los divisores del numero ingresado son:"<<endl;
 	for(int  i = 1; i <=n1; i++)
		{
			
			if (n1%i == 0)
  			{
  				 cout<< i <<" ";
  				 divicont++;
  			}
  			
  			
		} 
/////////////////////////////////////////////////////////////////////////////////////////	
		cout<<"\n";
		
		cout<<"\n\n b) Los multiplos de "<<n1<<" son:"<<endl;
		
 		for(int  x = 1; x <=5; x++)
		{
			
			cout<<n1 <<" X "<<x <<" = "<<x*n1<<endl;
  			
		} 	
////////////////////////////////////////////////////////////////////////////////////////////
 	
		
 		if(n1==1){
 			 cout<<"\n\n c)  El 1 no cuenta"<<endl;
 			}
 		if(n1==2){
  				cout<<"\n\n\n c) Es primo"<<endl;
 		}else{
  				while(o<n1){
   					if(n1%o==0){
    						cout<<"\n c) Es compuesto"<<endl;
   							 break;
   					
   					}else{
    				cont++;
  				 	}
   					o++;
  				}
 			if(cont==n1-2){
   					cout<<"\n c) Es primo"<<endl;
 					}
 	}
///////////////////////////////////////////////////////////////////////////////////////////////


	cout<<"\n d) El numero "<<n1<<" tiene "<<divicont<<" divisores"<<endl;
		
	
 
 

}
