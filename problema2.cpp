#include<iostream>
using namespace std;
int main(){
	
	int vect[5] = {1,2,3,4,5};
	int suma;
	double promedio;
	double promedio2;
	
	for(int i=0;i<5;i++){
		suma += vect[i];
	}
	
	promedio = suma/5;
	promedio2 = promedio * 0.25;
	
	cout<<suma<<endl;
	cout<<promedio<<endl;
	cout<<promedio2;
	
	return 0;
}
