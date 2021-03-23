#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	string salida1 ="El numero";
	
	int numero= 6174;
	float numero2= 13.95;
	
	char salida2[]= "Es el mas misterioso del mundo";
	
	cout<<salida1<<" "<<numero<<" "<<salida2<<"sabes porque¿"<<endl;
	cout<<"hoy llevamos "<<numero2<<"& del año"<<endl;
	
	printf ("%s %d %s sabes porque¿ \n",salida1.c_str(),numero, salida2);
	printf("Hoy llevamos %.2f%% del a%co",numero2,164);
	
	return 0;
}
