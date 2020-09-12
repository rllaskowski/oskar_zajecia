#include <iostream>
#include <algorithm>

using namespace std;

int tab[1000000];
int n;

/* Zwraca pozycję szukanej liczby w posortowanej tablicy
lub -1 jesli liczba nie znajduje się w niej  */
int znajdz(int a){
  int p, k, s;
  p = 0;
  k = n-1;
  while ( p<=k ){
    s = (k+p)/2;
    
    if (tab[s] < a) {
      p = s+1;
    } else if (tab[s] > a) {
      k = s-1;
    } else {
      return s;
    }
  }
  return -1;
}


int main() {  
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> tab[i];
  }
  
  sort(tab, tab+n);
  
  for (int i = 0; i < n; i++) {
    int x = tab[i];
    
    if (x > 1000) {
      /* jeśli x > 1000 to x^3 > 1000000000
      więc x^3 na pewno nie znajduje się we wczytanym zbiorze */
      break;
    }
    if (znajdz(x*x) != -1 && znajdz(x*x*x) != -1) {
      cout << x;
      return 0;
    }
  }

  cout << "NIE";
  
  return 0;
}
