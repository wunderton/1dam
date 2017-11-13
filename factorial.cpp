#include <iostream>
using namespace std;
int main() {

	int n;
	int i;
	int fact;

	cout << "Introduce un numero; " <<endl;
    cin >> n;
    fact=1;

    for (i=1 ; i<=n ; i++)
    {
         fact=i*fact;
    }
    
    cout << "El factorial es " << fact <<endl;




}
