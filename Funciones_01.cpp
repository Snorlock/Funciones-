#include<iostream>
// Diego Rodriguez Lopez 
using namespace std;
// Declaracion de funciones 
void suma(int a,int b, int c);
void producto(int a, int b, int c);
void division(int a, int b, int c);
void resta(int a, int b, int c);
// Funcion principal
int main(){
	int a,b,c;
	cout << "Introduce un numero: ";
	cin >>a;
	cout << "Introduce un numero: ";
	cin >>b;
	cout << "Introduce un numero: ";
	cin >>c;
	// Operaciones basicas 
	suma(a,b,c);
	producto(a,b,c);
    division(a,b,c);
    resta(a,b,c);
}
// Cuerpos de funciones por bloque
void suma(int a,int b, int c){
	int s= a + b + c;
	cout << "El resultado es:\n" << s << endl;
}
void producto(int a,int b, int c){
	int p= a * b * c;
   cout << "El producto es:\n " << p << endl;
}
void division(int a, int b, int c){
	float d=(float)a / b / c;
	cout << "La division es: \n" << d << endl;
}
void resta(int a, int b, int c){
	int r= a - b - c;
	cout << " La resta es: \n" << r << endl;
}

