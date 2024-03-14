#include<iostream>
using namespace std;
int a,b;
int main(){
	cout<<"Ingrese el tamaño del vector"<<endl;
	cin>>a;
	int vector [a];
	cout<<"Ingrese un numero"<<endl;
	cin>>b;
	
	for (int i=0; i<a; i++){
		vector[i]=i+1;
	}
	if (b%2==0){
		cout<<"Numeros pares del vector";
		for(int i=0; i<a; i++){
			if(vector[i]%2==0){
				cout<<vector[i]<<" ";
			}
		}
	}
	else {
		cout<<"Numeros impares del vector";
		for(int i=0; i<a; i++){
			if(vector[i]%2!=0){
				cout<<vector[i]<<" ";
			}
		}
	}
	return 0;
}
