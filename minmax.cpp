#include <iostream>
using namespace std;
int main() {

	int n;
	int i;
	int min;
	int max;
	int sum=0;

	cout << "Introduce un numero: ";
	cin >> n;
	max=n;
	min=n;
	for (i=9; i>=1; i--) {
		cout <<"Introduce otro numero: ";
		cin >> n;
		if (n>max) max=n;
		if (n<min) min=n;
	}

	cout <<"El numero mayor es: "<< max <<endl;
	cout <<"El numero menor es: "<< min <<endl;
}