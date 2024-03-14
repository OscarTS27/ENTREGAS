#include<iostream>
using namespace std;
int main(){
	
	string numero;
	string numeroInvertido;
	cout<<"Ingrese un numero: ";cin>>numero;
	
	for(char i = numero.length() - 1; i >=0; i--){
		numeroInvertido += numero[i];
	} 
	cout<<"\nEl numero invertido es: "<<numeroInvertido;
	
	
	return 0;
}

