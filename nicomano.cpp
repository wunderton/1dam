#include <iostream>
using namespace std;
int main() {

  int i;
  int res=0;
  int imp;
  int num;
  int a;
  
  cout <<"Introduce el numero: ";
  cin >> num;
  imp=num*(num-1);
    for (i=1, a=1; a<=num; i+=2, a++){
      res=res+imp+i;
    }
    cout <<"Resultado: " << res <<endl;;
}