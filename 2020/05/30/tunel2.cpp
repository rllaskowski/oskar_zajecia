#include <iostream>

using namespace std;

int tab[1000000];


/*
3 4 9 5 10 100000000000
3 4 9 9 10

*/
int main() {
  int n;
  int osoby;
  int o;
  cin >> n;
  int maks = 0;
  int x = 0;
  for(int i = 0;i<n;i++){
    cin >> x;
    
    if (x > maks) {
      maks = x;
    }
    
    tab[i] = maks;
  }
  
  cin >> osoby;
  int naj = n;
  tab[n] = 100000001;
  
  for(int i=0;i<osoby;i++) {
    cin >> o;
    
    int p = 0;
    int k = naj-1;
    int s = 0;
    int wynik = naj;
    
    while (p <= k) {
      s = (p+k) / 2;
      if(tab[s] > o) {
        wynik = s;
        k = s-1;
      }else {
        p = s+1;
      }
    }
    
    
    
    
    if(wynik == n){
      cout << -1 << " ";
    }else{
      naj = wynik-1;
      cout << wynik << " ";
    }
    
    
    
    
    
    
    
    
  }  return 0;
}

