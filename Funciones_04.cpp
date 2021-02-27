#include<iostream>
// Diego Rodriguez Lopez 
using namespace std;
// Declaracion de funciones 
int factoial(int a);
// Funcion principal
int main(){
	int a,b,c;
	cout << "Introduce un numero: ";
	cin >>a;
	cout << "Introduce un numero: ";
	cin >>b;
	cout << "Introduce un numero: ";
	cin >>c;
	// Factorial de cada variable 
	int fact= factoial(a);
	cout << "El " << a << "! es " << fact << endl;
	int fact2= factoial(b);
	cout << "El " << b << "! es " << fact2 << endl;
	int fact3= factoial(c);
	cout << "El " << c << "! es " << fact3 << endl;
}
// Cuerpos de funciones por bloque
int factoial(int a){
	int i;
	int resultado=1;
	for(i=1;i<=a;i++){
		resultado*= i;
	}
	return resultado;
}

