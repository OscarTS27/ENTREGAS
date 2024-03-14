#include<iostream>
using namespace std;
int main(){
	
	int vector[10] = {-1,5,8,9,4,5,2,5,2,20};
	int i;
	
	for(i = 0; i < 10;i++){
		
		if(i==4){
			if(vector[i] > 0){
				cout<<"La posicion 5 es positiva\n";
			}else{
				cout<<"La posicion 5 es negativa\n";
			}
		}
		
		if(i==0){
			if(vector[i] > 0){
				cout<<"La posicion 0 es positiva\n";
			}else{
				cout<<"La posicion 0 es negativa\n";
			}
		}
		
		if(i==9){
			if(vector[i] == 0){
				cout<<"La ultima posicion del vector es 0\n";
			}
			else{
				cout<<"La ultima posicion no es 0\n";
			}
		}
	}
	
	
	return 0;
}
