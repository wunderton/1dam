#include <iostream>
using namespace std;
int main() {

	int n;
	int i;

	cout <<"Introduce un numero: ";
	cin >> n;

	for (i=0; i*i<n; i++);

		if (i*i==n)
			cout << n << " Es el cuadrado de " << i <<endl;
		else
			cout <<"No es cuadrado de nadie" << endl;

}