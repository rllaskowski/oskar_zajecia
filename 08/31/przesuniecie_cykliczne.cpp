#include <iostream>
#include <queue>

using namespace std;

/*
Dla danego słowa oraz liczby k
Wypisz słowo przesuniete cyklicznie o k liter w prawo

Przykład
n = 6 k=2
abcdef -> efabcd

n <= 1000000
k <= 10^9
*/

int main() {
  queue<char> litery;
  string a;
  int k;
  cin >> a;
  cin >> k;
  char b;
  k = k%a.size();
  for(int i = 0;i<a.size();i++){
    litery.push(a[i]);
  }
  for(int i = 0;i< a.size()-k;i++){
    b = litery.front(); // pierwsza litera na kolejce
    litery.pop(); // zdjecie z kolejki pierwszej litery
    litery.push(b); // wsadzenie litery na koniec kolejki
  }
    
  for(int i = 0;i<a.size();i++){
    b = litery.front();
    cout << b;
    litery.pop();
  }
  
  
}