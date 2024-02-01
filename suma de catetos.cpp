/*Escriba un programa que lea de la
entrada estándar los dos catetos de un
triángulo rectángulo y escriba en la
  salida estándar su hipotenusa.*/
#include<iostream>
#include<math.h> //Libreria de matematicas y trigonometricas
using namespace std;

int main(){
	
	float ca,co,h;
	
	cout<<"Digite el valor del cateto adyascente: "; cin>>ca;
	cout<<"Digite el valor del cateto opuesto: "; cin>>co;
	
	h = sqrt(pow(ca, 2)+pow(co, 2)); // sqrt = raiz cuadrada, pow(nombre variable, numero a elevar)
	
	cout<<"\nEl valor de la hipotenusa es: "<<h<<endl;
	
	return 0;
}
