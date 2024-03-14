#include<iostream>
using namespace std;
int main(){
	
	int number = 5;
	int vect[number];
	int num;
	int result;
	
	
	
	for(int i=0;i<number;i++){
		cout<<i+1<<". Ingrese un numero: ";cin>>num;
		vect[i] = num;
	}
	
	cout<<endl;
	for(int i = 0; i<number; i++){
		cout<<vect[i]<<" ";
	}
	
	cout<<endl;
	cout<<endl;
	cout<<"Mejora: "<<endl<<endl;
	
	for(int i = 0; i<number;i++){

		if( (vect[i] % 2 == 0) && vect[i] > 0){
			cout<<vect[i] + 1<<" ";
		}
		if((vect[i]%2 != 0) && vect[i] > 0){
			result = vect[i] -= 2;
			if(result < 0){
				cout<<result - result<<" ";
			}else{
				cout<<result<<" ";
			}
		}
		else{
			if(vect[i] == 0){
				cout<<vect[i]<<" ";
			}
			if(vect[i]< 0){
				cout<<vect[i] - vect[i]<<" ";
			}
		}
	}
	


	
	return 0;
}
