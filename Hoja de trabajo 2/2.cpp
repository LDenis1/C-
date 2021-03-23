#include <iostream>
#include <conio.h>

int numero;
using namespace std;

main(){
	cout<<"Ingresa un numero:"<<endl;
	cin>>numero;
	
	if (numero % 3==0){
	cout<<"Es multiplo de 3"<<endl;
	}
	else{
		cout<<"No es multiplo de 3"<<endl;
	}
	
}
