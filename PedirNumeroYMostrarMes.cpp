#include<iostream>
using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero del 1 al 12: "; cin>>numero;
	if(numero >=1 && numero<=12){
		
	switch(numero){
	case 1: cout<<"El numero 1 corresponde al mes de: Enero"; break;
	case 2: cout<<"El numero 2 corresponde al mes de: Febrero"; break;
	case 3: cout<<"El numero 3 corresponde al mes de: Marzo"; break;
	case 4: cout<<"El numero 4 corresponde al mes de: Abril"; break;
	case 5: cout<<"El numero 5 corresponde al mes de: Mayo"; break;
	case 6: cout<<"El numero 6 corresponde al mes de: Junio"; break;
	case 7: cout<<"El numero 7 corresponde al mes de: Julio"; break;
	case 8: cout<<"El numero 8 corresponde al mes de: Agosto"; break;
	case 9: cout<<"El numero 9 corresponde al mes de: Septiembre"; break;
	case 10: cout<<"El numero 10 corresponde al mes de: Octubre"; break;
	case 11: cout<<"El numero 11 corresponde al mes de: Noviembre"; break;
	case 12: cout<<"El numero 12 corresponde al mes de: Diciembre"; break;
}
} else {
	cout<<"El numero que ingreso no es valido, por favor digite un numero del 1 al 12"<<endl;
}
	return 0;
}
