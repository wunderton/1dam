#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int n;
	int x;
	int i;

	cout <<"Introduce un numero" <<endl;
	cin >> n;

	for (i=1; i<=n; i++) {
		if (n%i==0) {
             x++;
            }
         }
         if (x!=2) {
              cout<<"No es Primo" <<endl;
            } else {
                cout<<"Si es Primo" <<endl;
         }
	}
