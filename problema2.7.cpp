#include <iostream>
using namespace std;

int main () {
    double n1;
    double n2;
    double n3;
    double maximo;
    
    cout << "Introduzca tres números: " <<endl;
    cin >> n1 >> n2 >> n3;
    if (n1>n2)
    if (n1>n3)
         maximo=n1;
    if (n2>n1)
    if (n2>n3)
         maximo=n2;
    if (n3>n1)
    if (n3>n2)
         maximo=n3;
        cout << "El máximo es: " << maximo << endl;



}