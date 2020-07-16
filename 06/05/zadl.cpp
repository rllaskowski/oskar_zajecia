#include <iostream>

using namespace std;



/*
2 3 5 7 11


0 0 0 0 0 2 1 1 1 2

n = 5
0 1 2 3 4
2 1 1 1 2 0


3 0 0 0 0 0

2^1 * 3^0 * 5^0 * 7^0 * 11^0
*/

int tab[100000];
bool zlozona[1700000];
int pierwsze[130000];

void znajdzPierwsze() {
  int g = 0;
  for (int i =2; i < 1700000; ++i) {
    if (zlozona[i] == false) {
     // to znaczy ze liczba jest pierwsza
      pierwsze[g] = i;
      g++;
      for (int j = 2*i; j < 1700000; j += i) {
        zlozona[j] = true; 
      }
      
    }
  }
}

int pot(int a, int b) {
  long long wynik = 1;
  
 for(int i = 0;i<b;i++){
  wynik = (wynik * a) % 1000000007;
 } 
 return wynik;
}

int main() {
  int n;
  int p = 0;
  int s = 0;
  int z = 0;
  znajdzPierwsze();
  
  cin >> n;
  for(int i = 0;i<n;i++){
    cin >> tab[i];
    s+= tab[i];
  }
  while(z < n && tab[z] == 0) {
   z++; 
  }
  for(int i = n-1;i >= 0;i--) {
    if(tab[i] > s - tab[i]){
      p = i;
    }
    
    int minim = min(tab[i], tab[i+1]);
    tab[i] -= minim;
    tab[i+1] -= minim;
    
    if(tab[i] == 0){
      swap(tab[i], tab[i+1]);
    }
  }
  
  cout << tab[0] << endl;
  
  
  if (tab[0] == 0) {
    cout << 1;
    return 0;
  } 
  
  if (p == 0) {
    cout << pot(pierwsze[z], tab[0]);
  }
  else {
    cout << pot(pierwsze[p], tab[0]);
  }
  
  return 0;
}

