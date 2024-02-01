/*******************************************
Author: Acxel Martin Elizalde Camacho
Fecha:31/01/2024
Programa: Calculadora Básica
********************************************/

#include<iostream>
using namespace std;

int imprimeMenu(){
	int opc = 0;
	do{
		system("cls");
		cout<<"\tCalculadora Básica"<<endl;
		cout<<"1) Sumar"<<endl;
		cout<<"2) Restar"<<endl;
		cout<<"3) Multiplicación"<<endl;
		cout<<"4) División"<<endl;
		cout<<"0) Salir"<<endl;
		
		cout<<"Elegir Opción: "; cin>>opc;
	}  while(opc<0 || opc>4);
	cout<<"La opcion que eligio fue: "<<opc<<endl;

	return opc;
}

void suma(float op1, float op2){
	float res = op1 + op2;
	cout<<"El resultado de la suma es: "<<res<<endl;
}
void resta(float op1, float op2){
	float res = op1 - op2;
	cout<<"El resultado de la resta es: "<<res<<endl;
}
void multiplicacion(float op1, float op2){
	float res = op1 * op2;
	cout<<"El resultado de la multiplicacion es: "<<res<<endl;
}

void division(float op1, float op2){
 
 if(op2 != 0){
	float res = op1 / op2;
	cout<<"El resultado de la division es: "<<res<<endl;
}
 else{
	cout<<"NO SE PUEDE DIVIDIR ENTRE CERO"<<endl;
}
}

int main(){
	int operacion = -1;
	while(operacion != 0){
	operacion = imprimeMenu();
	if(operacion != 0){
	float op1, op2;
	
	cout<<"Introduzca el primer operando: "; cin>>op1;
	cout<<"Introduzca el segundo operando: "; cin>>op2;
	
	switch(operacion){
		case 1: suma(op1, op2); break;
		case 2: resta(op1, op2); break;
		case 3: multiplicacion(op1, op2); break;
		case 4: division(op1, op2); break;
		case 0: cout<<"salir"; break;
	   }
	}
	system("pause");
}
		
	return 0;
}
