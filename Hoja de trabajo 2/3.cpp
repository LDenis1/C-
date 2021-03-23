#include <iostream>
#include <conio.h>

int n1,n2;
using namespace std;

main(){
	cout<<"Ingresa el primer numero:"<<endl;
	cin>>n1;
	cout<<"Ingresa el segundo numero:"<<endl;
	cin>>n2;
	
	if ((n1>n2)&&(n2<n1)){
		cout<<n1<<" Es mayor"<<endl;
	}
	else {
		cout<<n2<<" Es mayor"<<endl;
	}
	
	
	
}
