#include <iostream>
using namespace std;

int main () {
	int dato;
	int cuenta;

	for (dato=1; dato>=0; cuenta=cuenta+1) {
		cout << "Introduce un dato";
		cin >> dato;
		cout << "Recibido: "<< dato <<endl;
	} 
	cout <<"Fin de la transmisión"<<endl;
}
