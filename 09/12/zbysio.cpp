#include <iostream>
#include <set>

using namespace std;

/*
4 = 1*2*2
9 = 1*3*3
25 = 1*5*5
49 = 1*7*7
121 = 1*11*11
169 = 1*13*13
289 = 1*17*17 
361 = 1*19*19
529 = 1*23*23

1) Liczby ktore maja nieparzysta ilosc dzielnikow to liczby
ktore sa kwadratami liczb calkowittych

2) Liczby ktore maja dokladnie 3 dzielniki
to kwadraty liczb pierwszych

Wygenerujmy zbior wszystkich liczb <= 10^12, ktore maja 3 dzielniki
zbior: {4,9,25,49,121....}
Jak? Znajdzmy wszystkie liczby pierwsze <= 10^6 i dodajmy ich
kwadraty do generowanego zbioru
*/

bool czyZlozona[1000000];

set<long long> zbior;

void sito() {
  for(int i = 2;i<1000000;i++){
    if(czyZlozona[i]==false){
     /* to znaczy ze i jest liczbą pierwszą
      zatem wykreslamy wszystkie jej wielokrotnosci
      oraz dodajmy jej kwadrat to generowanego zbioru */
      long long x = i;
      zbior.insert(x*x);
     
      for(int j = i*2;j<1000000;j+=i) {
        czyZlozona[j] = true;
      }
    }
  }
}


int main() {
  int n;
  int a; 
  
  sito();
  cin >> n;
  
  for(int i = 0;i<n;i++){
    cin>>a;
    
    if (zbior.find(a) != zbior.end()){
      cout << "TAK" << endl;
    } else {
      cout << "NIE" << endl;  
    }
  }
  return 0;
}
