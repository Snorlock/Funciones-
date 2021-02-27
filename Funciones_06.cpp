#include<iostream>
// Diego Rodriguez Lopez 
using namespace std;
// Declaracion de funciones 
int cuenta(long int a);
int esPrimo(long int a);
// Funcion principal
int main(){
	cout << "Hola jeje" << endl;
	int a,b,c;
	cout << "Introduce un numero: ";
	cin >>a;
	cout << "Introduce un numero: ";
	cin >>b;
	cout << "Introduce un numero: ";
	cin >>c;
	// si es primo o no 
	esPrimo(a);
	esPrimo(b);
	esPrimo(c);

}
int cuenta(long int a){
	// variable para llevar la cuenta
	int c=0; 
	// variable para prueba de divisores 
	long int d=1;
	// buscando divisores 
	do{
		// la parada del ciclo 
		if(d>a) 
		//rompiendo el ciclo
		break;
		// haciendo la prueba 
		if(a%d==0) 
		c++; 
		// para hacer la siguiente prueba 
		d=d+1; 
	}while(1);
	// devolviendo la cuenta 
	return c; // 2
}
int esPrimo(long int a){
	if(cuenta(a)==2){
     cout << "Es primo " << a << endl;}
     else{
       cout << "No es primo " << a << endl;
     }
   

	return 0; // 0
}
