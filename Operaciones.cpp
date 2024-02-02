// Author: Acxel Martin Elizalde Camacho
// Professor: Gerardo Hernandez Hernandez
// Subject: OOP (Object Oriented Programming)
// Date creation: 2024-02-01.

#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int printMenu(){
    int opc = -1;
    do {cout<<"\tOperaciones"<<endl;
    cout<<"1) Pendiente de una recta"<<endl;
    cout<<"2) Velocidad promedio"<<endl;
    cout<<"3) Polinomio cuadratico"<<endl;
    cout<<"4) Altura de un objeto en Caida Libre"<<endl;
    cout<<"0) Salir"<<endl;
    cout<<"Elegir opcion: "<<endl; cin>>opc;
    } while (opc<0 || opc>4);
    return opc;
}

void calcularPendRecta(){
    // m = (y2-y1) / (x2-x1)
    double y2=0.0, y1=0.0, x2=0.0, x1=0.0, m=0.0; 
    //se usa "double" para tener un resultado mas preciso
    
    cout<<"******Pendiente de una recta******"<<endl;
    cout<<"Ingrese X1: "; cin>>x1;
    cout<<"Ingrese X2: "; cin>>x2;
    cout<<"Ingrese Y1: "; cin>>y1;
    cout<<"Ingrese Y2: "; cin>>y2;
    
    m = (y2-y1) / (x2-x1);
    
    if((x2-x1) != 0){
    cout<<"El resultado de los puntos ("<<x1<<","<<y1<<"),("<<x2<<","<<y2<<") es: "<<m<<endl;
} else {
	cout<<"NO ES POSIBLE DIVIDIR ENTRE CERO"<<endl;
}
    system("PAUSE");
    system("cls");
    }
    
    void calcularVelProm(){
        // vprom = (d_final - d_inicial ) / (t_total)
        
        double vprom = 0.0, d_final = 0.0, d_inicial = 0.0, t_total = 0.0;
        
        cout<<"******Velocidad Promedio******"<<endl;
        cout<<"Ingrese la distancia inicial: "; cin>>d_inicial;
        cout<<"Ingrese la distancia final: "; cin>>d_final;
		cout<<"Ingrese el tiempo total: "; cin>>t_total;
        system("cls");
        
		vprom = (d_final - d_inicial ) / (t_total);
        
        cout<<"Los datos son:\nDistancia Inicial = "<<d_inicial<<"\nDistancia Final = "<<d_final<<"\nTiempo total = "<<t_total<<"\n\nPor lo tanto la velocidad promedio es = "<<vprom;
        cout<<endl;
        
        system("PAUSE");
        system("cls");
    }
    
    void calcularPolCua(){
    	// x1 = (-b + (sqrt(inside)) / (2*a));
    	// x2 = (-b - (sqrt(inside)) / (2*a));
    	
    	double x1 = 0.0, x2 = 0.0, a = 0.0, b = 0.0, c = 0.0;
    	cout<<"******Polinomio Cuadratico******"<<endl;
    	cout<<"Ingrese el valor de a: "; cin>>a;
    	cout<<"Ingrese el valor de b: "; cin>>b;
    	cout<<"Ingrese el valor de c: "; cin>>c;
    	system("cls");
    	
    	double inside = (b*b) - (4*a*c); //inside para identificar lo que hay ADENTRO de la raíz
    	
   	  if(inside >= 0){
        	x1 = (-b + (sqrt(inside)) / (2*a));
    		x2 = (-b - (sqrt(inside)) / (2*a));
    	cout<<"Las soluciones son: \nX1 = "<<x1<<"\nX2 = "<<x2<<endl;
    //utilicé if porque no hay raiz negativa por eso mayor o igual a cero
    } else {
    	cout<<"NO HAY SOLUCIONES REALES"<<endl;
	}
		system("PAUSE");
        system("cls");
	}
	
	void caidaLibre(){
	// h = (vi*t) - ((0.5)*g) * (t*t);
	
	double h = 0.0, vi = 0, t = 0.0, g = 9.81; // vi (velocidad inicial) = 0, porque es caida libre es decir, su velocidad inicial será CERO
	cout<<"******Altura de un objeto en Caida Libre******"<<endl;	
	cout<<"Ingrese el valor del tiempo en segundos: "; cin>>t;
	
	h = (vi * t) + (0.5 * g * pow(t, 2));
	/* deje en "+" contemplando ya el despeje 
	al hacer la operación nos quedaria una altura negativa.
	la formula original es h = (vi*t) - ((0.5)*g) * (t*t) + H
	donde H es la altura desde donde se deja caer el objeto.
	*/
	cout<<"\nLa altura calculada del objeto en caida libre es: "<<h<<" metros."<<endl;
	
	system("PAUSE");
	system("cls");
	}


int main(){
    int opc = -1;
    while (opc != 0){
        opc = printMenu();
        
        if(opc == 1){
        	system("cls");
        calcularPendRecta();    
        } 
		else if(opc == 2){ 
		//system("cls"); antes del metodo va a limpiar pantalla y despues pedira los datos del metodo
        	system("cls");
            calcularVelProm();
         }
		 else if(opc == 3){
    		system("cls");
    		calcularPolCua();
			}
		 else if (opc == 4){
		 	system("cls");
			caidaLibre();
		 }
		 else{
		 	return 0;
		  }	
		}
        
		return 0;
}
