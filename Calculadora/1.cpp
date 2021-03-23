#include <iostream>

using namespace std;
int n1,n2, total, opcion;



  int calculadora(){
	cout<<"\nIngresa el primer numero"<<endl;
	cin>>n1;
	cout<<"\nIngresar el segundo numero"<<endl;
	cin>>n2;
	
	total=n1+n2;
	
	cout<<"\nEl total es:"<<total;
}


main(){
	cout<<"Que operacion desea hacer?"<<endl;
	cout<<"1. Suma"<<endl;
	cout<<"2. Resta"<<endl;
	cout<<"3. Multiplicacion"<<endl;
	cout<<"4. Division"<<endl;
	cin>>opcion;

	switch(opcion){
		case 1:
			calculadora();
		
	
		break;
		
		case 2:
			calculadora();
			break;
			
		
		case 3:
			calculadora();
			break;
		
			
		case 4:
			calculadora();
			break;
			
	}		
}
