#include <iostream>
using namespace std;

int main () {
	
	double valor1;
	double valor2;

	cout << "Introduzca dos números: " << endl;
	cin >> valor1 >> valor2;
	if (valor1>valor2)
		cout << "El primer número es mayor" << endl;
	else
		cout << "El segundo número es mayor" << endl;
}