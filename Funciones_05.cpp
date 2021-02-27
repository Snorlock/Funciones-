#include<iostream>
// Diego Rodriguez Lopez 
using namespace std;
// Declaracion de funciones 
int parImpar(int a);

// Funcion principal
int main(){
	int a,b,c;
	cout << "Introduce un numero: ";
	cin >>a;
	cout << "Introduce un numero: ";
	cin >>b;
	cout << "Introduce un numero: ";
	cin >>c;
	// Es par o es impar 
	parImpar(a);
	parImpar(b);
	parImpar(c);

}
int parImpar(int a){
		// es par
	switch(a%2){
		case 0:
	cout << "ES PAR: " << a << endl;
	return a/2;
	    default:
	    // es impar
	    cout << "Es impar: " << a << endl;
    }   
}
