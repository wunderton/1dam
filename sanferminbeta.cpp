//Practica San Fermines

//Antonio Carrasco Villegas

#include <iostream>
using namespace std;
int main () { 
	int toros=1;
	int velocidad=0;
	int velocidadmax=0;
	int i;

	cout <<"PROGRAMA PARA CALCULAR LA VELOCIDAD A LA QUE UN CORREDOR DEBE IR PARA QUE NO LO PILLE EL TORO" <<endl;

	while (toros>0) {
		velocidadmax=0;
		cout <<"\nIntroduce el numero de toros que corren en esta carrera: ";
		cin >> toros;
		if (toros<=10 && toros>=1) {
			for (i=1; i<=toros; i++) {
				cout <<"Introduce velocidad toro " << i << ": ";
				cin >> velocidad;
					if (velocidad>99) {
						cout <<"Tu flipas, como va a ir un toro a "<< velocidad <<" Km/h" <<endl;
					}
						if (velocidad<1) {
							cout <<"El toro se ha parado" <<endl;
						}
							if (velocidad<0) {
								cout <<"El toro se ha dado la vuelta y va hacia atrás" <<endl;
							}	
								if (velocidad>velocidadmax && velocidad<100) velocidadmax=velocidad;
								
			}
				cout <<"El corredor debe ir a "<< velocidadmax <<" KM/h y 1 metro del toro como minimo"<<endl;
 		} 
 		else cout <<"Debe haber entre 1 y 10" <<endl;
 	}
 	cout <<"No hay toros en esta carrera, fin del programa" << endl;

 	return 0;
}