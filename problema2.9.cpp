#include <iostream>
using namespace std;

int main () {
	
	double nota;

	cout << "Introduzca la nota: " <<endl;
	cin >> nota;
	if (nota<5) cout <<"Suspenso" <<endl;
		
	else if (nota<7) cout <<"Aprobado" <<endl;

		else if (nota<9) cout <<"Notable" <<endl;

			else if (nota==10) cout <<"SOBRESALIENTE" <<endl;

				else cout <<"Introduce un número entre 0 y 10" <<endl;

}