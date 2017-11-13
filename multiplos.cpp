#include <iostream>
using namespace std;
int main() {
	int linf;
	int lsup;
	int mult=0;
	int i;
	int n;

	cout <<"Introduce el limite inferior: ";
	cin >> linf;
	cout <<"Introduce el limite superior: ";
	cin >> lsup;
	cout <<"Introduce un numero: ";
	cin >> n;


	for (i=linf; i<=lsup; i++)
		if (i%n==0)
			mult++;
	cout <<"Hay " << mult << " multiplos de " << n <<endl;
}