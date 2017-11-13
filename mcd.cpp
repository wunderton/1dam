#include <iostream>
using namespace std;
int main() {

	int n;
	int x;
	int res;

	cout <<"Introduce dos numeros: ";
	cin >> n;
	cin >> x;
	res=n%x;
	while (res!=0) {
		n=x;
		x=res;
		res=n%x;
	}
	cout <<"El Maximo Comun Divisor es: " << x <<endl;

}