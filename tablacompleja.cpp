#include <iostream>
using namespace std;
int main() {

	int i;
	int a;

	for (a=1; a<=10; a++) {
		cout <<"Tabla del " << a <<endl;
		for (i=1; i<=10; i++)
			cout << a << " X " << i << " = " << a*i <<endl;
	}

}