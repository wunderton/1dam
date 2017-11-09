#include <iostream>
using namespace std;

int main () {

	int numero;
	int resto;

	cout << "Introduce un número para saber si es par o impar: " << endl;
	cin >> numero;
	
	resto=numero%2;
	if (resto==0)
		cout << "El número es par" << endl;
	else
		cout << "El número es impar" << endl;


}