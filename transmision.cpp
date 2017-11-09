#include <iostream>
using namespace std;

int main () {
	int dato;

	do{
		cout << "Introduce un dato";
		cin >> dato;
		cout << "Recibido: "<< dato <<endl;
	} while (dato >=0);
	cout << "Fin de la transmisión"<<endl;
}
