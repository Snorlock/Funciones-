#include<iostream>
// Diego Rodriguez Lopez 
using namespace std;
// Declaracion de funciones 
void suma(int a,int b, int c);
void producto(int a, int b, int c);
float division(float a, float b);
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
    float resultado = division(a,b);
    cout << "La division es \n" << resultado;
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
float division(float a, float b){
	float d=b;
        while(d==0){
	cout << "El segundo no puede ser 0" << endl;
        cout << "Introduce otro valor diferente";
        cin >> d;
} 
return a / d;
}
void resta(int a, int b, int c){
	int r= a - b - c;
	cout << " La resta es: \n" << r << endl;
}

