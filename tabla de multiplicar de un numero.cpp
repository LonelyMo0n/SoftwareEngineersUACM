/*******************************************
Author: Acxel Martin Elizalde Camacho
Fecha:26/01/2024
Programa: Mostrar la tabla de multiplicar de un
número
********************************************/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int numero;
	
	do{
		cout<<"Digite un numero del 1 al 10: "; cin>>numero;
	}while((numero<1) || (numero>10));
	
	for(int i=1;i<=20;i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	
	
	
	system("pause");
	return 0;
}
