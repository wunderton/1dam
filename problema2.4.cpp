#include <iostream>
#include <cmath>
using namespace std;

int main (){
    double radio;
	double pi=3.13159;
						
	cout << "Introduzca el radio del circulo: " <<endl;
	cin >> radio;
	if (radio<=0)
		cout << " El radio es negativo" << endl;
	else {
		cout << "Radio: "<< radio << endl;
		cout << "Area: " << pi*pow(radio,2) << endl;
		cout << "Perimetro; " <<2*pi*radio << endl;							
		}	
			
}