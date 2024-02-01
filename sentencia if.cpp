/* La sentencia if
 if(condicion){
     Instrucciones 1;
 }
 else!
     Instrucciones 2;
*/
#include<iostream>
using namespace std;

int main(){
	int numero, dato=5;
	cout<<"Digite un numero: "; cin>>numero;
	// "==" es perador de igualdad, "!=" operador de diferencia
	if(numero>dato){
		cout<<"El numero es mayor a 5 ";
	}
	else{
		cout<<"El numero es menor que 5";
	}
	
	
	return 0;
}
