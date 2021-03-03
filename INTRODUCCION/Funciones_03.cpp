#include<iostream>
// Diego Rodriguez Lopez 
using namespace std;
// Declaracion de funciones 
int maximo(int a,int b);
// Funcion principal
int main(){
	int a,b,c;
	cout << "Introduce un numero: ";
	cin >>a;
	cout << "Introduce un numero: ";
	cin >>b;
	cout << "Introduce un numero: ";
	cin >>c;
	// Maximo de valor a b y c
	int max1 = maximo(a,b);
	int max2 = maximo(max1,c);
	cout << "El mas grande de " << a << " , " << b << " y " << c <<" es: " << max2 << endl;

}
// Cuerpos de funciones por bloque
int maximo(int a,int b){
	int c;
	if(a>b){
		c=a;
	}
	else{
		c=b;
	}
	return c;
}

