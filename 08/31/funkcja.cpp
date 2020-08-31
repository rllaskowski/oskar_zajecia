#include <iostream>


using namespace std;

/*
Funkcja liniowa to funkcja postaci
f(x) = a*x+b gdzie a i b to jakieś liczby rzeczywiste

Miejsce zerowe funkcji f(x) to taki x, że f(x) = 0
Wzór na miejsce zerowe funkcji liniowej to -b/a,
ponieważ rozwiązanie rownania a*x+b = 0 dla x to -b/a


1) -b/a to liczba całkowita(a dzieli b <-> b % a == 0) 

2) -b/a to ułamek, ktory nalezy skrocic 


Przyklad nwd(a, b):
a  b
24 30
30 24
 | a = a%b
 V 
6  24
 | zamien miejscami a i b
 V
24 6
... dopoki b > 0

*/

int nwd(int a, int b) {
  if(b>a){
    swap(a, b);
  }
  while (b != 0) {
    a = a%b;
    swap(a,b);
  }
  return a;
}


int main() {
  int k;
  cin >> k;
  int a, b, c;
  for(int i = 0;i< k;i++){
    cin >> a >> b;
    if(b % a == 0){
      cout << -b/a << endl;
    } else {
      c = nwd(abs(a), abs(b));
      a/=c;
      b/=c;
   
      if (a < 0 && -b < 0) {
        cout << b << "/" << -a << endl;
      } else if (a < 0 && -b > 0) {
          cout << b << "/" << -a << endl;
      } else {
       
        cout << -b << "/" << a << endl;
      }
    }
  }
  return 0;
}