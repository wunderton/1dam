#include <iostream>
using namespace std;
int main() {
	int inf;
	int sup;
	int mult=0;
	int i;
	int n;

	cout <<"Introduce el limite inferior: ";
	cin >> inf;
	cout <<"Introduce el limite superior: ";
	cin >> sup;
	cout <<"Introduce un numero: ";
	cin >> n;


	for (i=inf; i<=sup; i++)
		if (i%n==0)
			mult++;
	cout <<"Hay " << mult << " multiplos de " << n <<endl;
}