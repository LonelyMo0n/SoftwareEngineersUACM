/*******************************************
Author: Acxel Martin Elizalde Camacho
Fecha:26/01/2024
Programa: Cajero Automático (Simulador)
********************************************/

//Hacer un programa que símule un cajero automático con un saldo inicial de 1000 Dólares
#include<iostream> 
using namespace std;

int main(){
	int saldo_inicial = 1000, opc;
	float a1, a2, saldo = 0;
	
	cout<<"\tBienvenido a su cajero automático"<<endl;
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	cout<<"2. Retirar dinero en cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opción: "; cin>>opc;
	
	switch(opc){
		case 1: 
		    cout<<"Digite la cantidad de dinero a ingresar: "; cin>>a1;
		    saldo = saldo_inicial + a1;
		    cout<<"La nueva cantidad de dinero en su cuenta es: "<<saldo;break;
		
		case 2:
			cout<<"Digite la cantidad de dinero a retirar: "; cin>>a2;
			
			if(a2>saldo_inicial){
				cout<<"NO tiene esa cantidad de dinero";
			}
	    else{
			saldo = saldo_inicial - a2;
			cout<<"Su dinero en cuenta ahora es: "<<saldo;break; 
		}
		case 3: break;
			
		
	}
	
	
	
	
	
	
	return 0;
}
