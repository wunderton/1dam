#include <iostream>
#include <cmath>
using namespace std;

int main (){
     
    double a;
    double b;
    double c;
    double ecu1;
    double ecu2;
    double disc;
    
    cout << "Introduce el primer valor: ";
    cin >> a;
    cout << "Introduce el segundo valor: ";
    cin >> b;
    cout << "Introduce el tercer valor: ";
    cin >> c;
    
    disc=b*b-4*a*c;
    ecu1=(-b+sqrt (disc))/(2*a);
    ecu2=(-b-sqrt (disc))/(2*a);
    
    cout << "El resultado de la ecuación 1 es: " <<ecu1 <<endl;
    cout << "El resultado de la ecuación 2 es: " <<ecu2 <<endl;
    if (disc>=0){
        cout << "El discriminante es positivo " <<endl;
        }
    else 
        cout << "El discriminante no es positivo, introduce un número positivo!" <<endl;

}