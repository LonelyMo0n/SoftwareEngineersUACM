/*******************************************
Author: Acxel Martin Elizalde Camacho
Fecha:26/01/2024
Programa: Datos de una persona
********************************************/

/*Realice un programa que lea de la estandar los siguientes datos
de una persona:

   Edad: dato de tipo entero.
   Sexo: dato de tipo caracter.
   Altura en metros: dato de tipo real.
   
Tras leer los datos, el programa debe mostrarles salida estandar. */
#include<iostream>
using namespace std;

int main(){
	int edad;
	char sexo[15];
	float altura;
	
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Digite su sexo: "; cin>>sexo;
	cout<<"Digite su altura en metros: "; cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura en metros: "<<altura<<endl;
	
	return 0;
}
