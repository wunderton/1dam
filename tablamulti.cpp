#include <iostream>
using namespace std;

int main () {
	int num;
	int n=1;

	cout << "Introduce un numero cualquiera para ver su tabla de multiplicar" <<endl;
	cin >> num;

	do {
		cout << num << " x " << n << " = " << num*n <<endl;
		n=n+1;

	} while (n<=10);
}
