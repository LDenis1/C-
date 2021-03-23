#include <iostream>

int x = 0; 
int index;

using namespace std;

main(){
	
	
	cout<<"En que numero quieres iniciar¿"
	cin>>
	
	while(x<=10){ //condicion final
		cout<<x<<"\n";
		x++; //STEP
	}
	cout << "\n Ahora con for \n";
	
	for(index=0;index<=10;index+=1){
		cout << index<<"\n";
	}
	
	cout << "\n Ahora con do while \n";
	int y = 0;
	
	do{
		cout << y<<"\n";
		y++;
	} while (y<=10);
	

	
	
	return 0;
}
