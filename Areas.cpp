#include <iostream>
using namespace std;
int main(){
		//INCLUIMOS AHORA UN TITULO, Y DOS OPCIONES PARA QUE EL USUARIO ESCOJA QUE OPERACION QUIERE REALIZAR
		//INCLUIMOS DOS CONDICIONALES Y ASI MISMO ASIGNAMOS OTRAS VARIABLES
		int opc;
    	double b,h;
		const float PI=3.1416;
   		float radio;
   		//TITULO
   		cout<<"BIENVENIDOS"<<endl;
   		cout<<"PROGRAMA BASICO PARA IMPRIMIR EL AREA DEL TRIANGULO Y DEL CIRCULO"<<endl;
   		cout<<"Elija la opcion que desee: 1.- Tirangulo 2.- Circulo"<<endl;
   		cin>>opc;
   		if (opc==1)
   		{
    		cout<<"Ingresa base"<<endl;
        	cin>>b;
        	cout<<"Ingresa altura"<<endl;
        	cin>>h;
        	double area;
        	area=b*h/2;
			cout<<area;  
		}	
		if (opc==2)
		{
		
			cout<<"*****area de un circulo*****"<<endl<<endl;
			cout<<endl;
			cout<<"ingresa el radio:"<<endl;
			cin>>radio;
			cout<<endl;
			cout<<"el area es: " <<endl <<(radio*radio)*PI<<endl<<endl;
 	}
   return 0;
}
