/* "IF MEDIO: Pro evolution soccer con las condiciones 
FUERA, LARGUERO, ESCUADRA, PALO Y GOL, 
PORTERIA CORRECTA, TIROS HACIA ABAJO: 2.10 pag 64 "

 (x1,y1)
	.___________ 
	|          |
	|		   |
	|__________.
	        (x2,y2)

 */


#include <iostream>
using namespace std;

int main () {
	
	int a;
	int b;
	int y1=9;
	int y2=2;
	int x1=2;
	int x2=9;
	

	cout << "Introduce dos números, desde 1 hasta 10" <<endl;
	cin >> a,b;

	if ((a<y1 && a>y2) && (b>x1 && b<x2))
	{
		cout <<"GOL" <<endl;
	}

	else if ((a>y1 && a>y2) && (b>x1 && b<x2))
	{
		cout <<"Fuera por arriba" <<endl;
	}
	else if ((a>y1 && a>y2) && (b<x1 && b<x2))
	{
		cout <<"Fuera arriba izquierda" <<endl;
	}

	else if ((a<y1 && a>y2) && (b<x1 && b<x2))
	{
		cout <<"Fuera izquierda" <<endl;
	}
	else if ((a<y1 && a<y2) && (b<x1 && b<x2))
	{
		cout <<"Fuera abajo izquierda" <<endl;
	}
	else if ((a>y1 && a>y2) && (b>x1 && b>x2))
	{
		cout <<"Fuera arriba derecha" <<endl; 
	}
	else if ((a<y1 && a>y2) && (b>x1 && b>x2))
	{
		cout <<"Fuera derecha" <<endl;
	}
	else if ((a<y1 && a<y2) && (b>x1 && b>x2))
	{
		cout <<"Fuera abajo derecha" <<endl;
	}
	else if ((a<y1 && a<y2) && (b>x1 && b<x2))
	{
		cout <<"Demasiado corto" <<endl;
	}
	else if ((a==y1 && a<y2) && (b>x1 && b<x2))
	{
		cout <<"Palo superior" <<endl;
	}
	else if ((a<y1 && a>y2) && (b==x1 && b<x2))
	{
		cout <<"Palo izquierda" <<endl;
	}
	else if ((a<y1 && a>y2) && (b>x1 && b==x2))
	{
		cout <<"Palo derecho" <<endl;
	}
	
}

	
