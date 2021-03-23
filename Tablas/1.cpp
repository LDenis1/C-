#include <iostream>
#include <conio.h>

int tabla=1;

using namespace std;

	main(){
	
	while(tabla!=0)
	{
	
		cout<<"Que tablas deseas¿"<<endl;
		cin>>tabla;

			for(int i=1;i<=10; i++)
			{
    			 cout << i << " * "<<tabla<<"="<<tabla*i<<endl;
			 }
	}	
}
