#include <iostream>
using namespace std;

int main () {
	
	double numero1;
	double numero2;
	char operacion;

	cout << "Introduzca el primer número: "<<endl;
	cin >> numero1;
	cout << "Introduzca el segundo número: "<<endl;
	cin >> numero2;

	cout << "s - Sumar" <<endl;
	cout << "r - Restar" <<endl;
	cout << "x - Muliplicación" <<endl;
	cout << "d - División" <<endl;	
	cout << "Pulse la tecla de la operacion que desee realizar" <<endl;
	cin >> operacion;

	switch (operacion){
		case 's': cout <<"Ha elegido SUMAR: " << numero1+numero2 <<endl;
		break;
		case 'r': cout <<"Ha elegido RESTAR: " << numero1-numero2 <<endl;
		break;
		case 'x': cout <<"Ha elegido MULTIPLICAR: " << numero1*numero2 <<endl;
		break;
		case 'd': cout <<"Ha elegido DIVIDIR: " << numero1/numero2 <<endl;
	}
}



