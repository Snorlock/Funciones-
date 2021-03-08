#include<iostream>
// Diego Rodriguez Lopez 
using namespace std;
// Declaracion de funciones 
void suma(int a,int b, int c);
void Maximo( int a, int b);
int maximo(int a,int b);
int factoial(int a);
int parImpar(int a);
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
    cout << "La division es: \n" << resultado;
    resta(a,b,c);
    // Maximo entre valor a y b
	Maximo(a,b);
	// Maximo de valor a b y c
	int max1 = maximo(a,b);
	int max2 = maximo(max1,c);
	cout << "El mas grande de todos es: " << max2 << endl;
	// Factorial de cada variable 
	int fact= factoial(a);
	cout << "El " << a << "! es " << fact << endl;
	int fact2= factoial(b);
	cout << "El " << b << "! es " << fact2 << endl;
	int fact3= factoial(c);
	cout << "El " << c << "! es " << fact3 << endl;
	// Es par o es impar 
	parImpar(a);
	parImpar(b);
	parImpar(c);

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
        cout << "Introduce un nuevo valor " ;
        cin >> d;
} 
return a / d;
}
void resta(int a, int b, int c){
	int r= a - b - c;
	cout << " La resta es: \n" << r << endl;
}
void Maximo( int a, int b){
	
	if(a>b){
		cout <<"es mayor: " << a << endl;
	}
	else if(a<b){
		cout << "es mayor:  " << b << endl;
	}
	else
	    cout << "error" << endl;	
}
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
int factoial(int a){
	int i;
	int resultado=1;
	for(i=1;i<=a;i++){
		resultado*= i;
	}
	return resultado;
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
