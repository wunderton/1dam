#include <iostream>
using namespace std;

int main () {

    int n;
    int sum;
    cout <<"Introduce un numero: " <<endl;
    cin >> n;

    for (sum=0; n!=0; sum=sum+n) {
        cout <<"Introduce un numero: " <<endl;
        cin >> n;
    }
    cout <<"Total= " << sum <<endl;
}