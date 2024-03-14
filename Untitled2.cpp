#include<iostream>
using namespace std;
int vect[20];
int num;
int main(){
	
	cout<<"Ingrese los numeros del vector";
	for(int i=0;i<20;i++){
		cout<<i+1<<". Ingrese un numero: ";cin>>num;
		vect[i] = num;
	}
	}
