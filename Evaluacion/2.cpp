#include <iostream>
#include <math.h>

float n1 , n2, n3;

using namespace std;
main()
{
	
	cout<<"Ingrese un numero"<<endl;
	cin>>n1;
	cout<<"Ingrese otro numero "<<endl;
	cin>>n2;
	
	
	cout<<"\n"<<n1<<" + "<<n2<<"= "<<n1+n2<<endl;
	cout<<n1<<" - "<<n2<<"= "<<n1-n2<<endl;
	cout<<n1<<" * "<<n2<<"= "<<n1*n2<<endl;
	cout<<n1<<" / "<<n2<<"= "<<n1/n2<<endl;
	cout<<"Residuo = "<<fmod(n1,n2);

}


