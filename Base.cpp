#include<iostream>
#include<string>
#include<ctime>
using namespace std;
int main(){
	
	int indice = 0;
	cout<<"Cantidad de personas a registrar: ";cin>>indice;
	
	string namesP[indice];
	string lugarP[indice];
	int ano[indice];
	int mes[indice];
	int dia[indice];
	string personaEncontrada;
	bool encontrado = false;
	
	
	for(int i = 0; i < indice;i++){
		cout<<"\nIngrese el nombre " << i + 1<<": ";cin>>namesP[i];
		cout<<"Ingrese la vecindad: ";cin>>lugarP[i];
		cout<<"Ingrese ano de nacimiento: ";cin>>ano[i];
		cout<<"Ingrese mes de nacimiento: ";cin>>mes[i];
		cout<<"Ingrese dia de nacimiento: ";cin>>dia[i];
	}
	
	for(int i = 0;i<indice;i++){
		cout<<"\n\n--------Persona----------"<<endl;
		cout<<"Nombre: "<<namesP[i]<<endl;
		cout<<"Vecindad: "<<lugarP[i]<<endl;
		cout<<"Fecha de nacimiento: "<<ano[i]<<"/"<<mes[i]<<"/"<<dia[i]<<endl;
		
		
		if(ano[i] <=2006){
	cout<<"La persona es mayor de edad";
		}
		
		else if((ano[i] >= 2007) && (ano[i] <= 2024)){
			cout<<"La persona es menor de edad";
		}else{
			cout<<"El ano ingresado es incorrecto";
		}
		
		
	}
	
	cout<<"\n\nIngrese el nombre de la busqueda: ";cin>>personaEncontrada;
	
	for(int i = 0; i < indice; i++){
		if(personaEncontrada == namesP[i]){
		cout<<"\n\n--------Persona Encontrada----------"<<endl;
		cout<<"Nombre: "<<namesP[i]<<endl;
		cout<<"Vecindad: "<<lugarP[i]<<endl;
		cout<<"Fecha de nacimiento: "<<ano[i]<<"/"<<mes[i]<<"/"<<dia[i]<<endl;
		if(ano[i] <=2006){
	cout<<"La persona es mayor de edad";
		}
		
		else if((ano[i] >= 2007) && (ano[i] <= 2024)){
			cout<<"La persona es menor de edad";
		}else{
			cout<<"El ano ingresado es incorrecto";
		}
		encontrado = true;
		}
	}
	if(!encontrado){
		cout<<"La persona ingresada no fue encontrada";
	}
	
	return 0;
}
