#include <iostream>
using namespace std;

int main () {
	int num;
	int n=1;
	cout << "Introduce un numero cualquiera para ver su tabla de multiplicar" <<endl;
	cin >> num;
	for (n=1; n<=10; n++)
		cout << num << " x " << n << " = " << num*n <<endl;
	

}
