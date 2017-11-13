#include <iostream>
using namespace std;
int main() {
	int n;
	int i;
	int res;

	cout << "Introduce un numero para calcular su sumatoria: ";
	cin >> n;
	for (i=1; i<=n; i++){
		res=res+n;
	}
	cout <<"El total de la sumatoria es: " << res << endl;
}