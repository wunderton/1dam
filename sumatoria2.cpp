#include <iostream>
using namespace std;
int main() {
	int n;
	int i;
	double res=0;

	cout << "Introduce un numero ";
	cin >> n;
	for (i=1; i<=n; i++)
		res +=(1.0-i)/i;
	cout <<"Resultado: " << res <<endl;


}