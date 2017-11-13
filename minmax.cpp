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
	for (i=1; i<=9; i++) {
		cin >> n;
		sum=sum+n;
		if (n>max) max=n;
		if (n<min) min=n;
	}
	cout <<"La suma total es: " << sum <<endl;
	cout <<"El numero mayor es: "<< max <<endl;
	cout <<"El numero menor es: "<< min <<endl;
}