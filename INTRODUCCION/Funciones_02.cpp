#include<iostream>
// Diego Rodriguez Lopez 
using namespace std;
// Declaracion de funciones 
void Maximo( int a, int b);
// Funcion principal
int main(){
	int a,b,c;
	cout << "Introduce un numero: ";
	cin >>a;
	cout << "Introduce un numero: ";
	cin >>b;
    // Maximo entre valor a y b
	Maximo(a,b);

}
void Maximo( int a, int b){
	
	if(a>b){
		cout <<"es mayor: " << a << "que" << b << endl;
	}
	else if(a<b){
		cout << "es mayor:  " << b << endl;
	}
	else
	    cout << "error" << endl;	
}


