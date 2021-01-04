#include <iostream>
using namespace std;
int tab[50000];
int ile[26];

int main() {
  int n, k;
  cin >> n >> k;
  string a;
  cin >> a;
  for(int i = 0;i<n;i++){
    cin >> tab[i];
  }
  int kon = 0;
  int wynikMax = 0;
  int wynikAkt = 0;
  for (int pocz = 0; pocz < n; pocz++) {
    ile[a[pocz]-'A']++;
    wynikAkt+=tab[pocz];
    
    while(ile[a[pocz]-'A'] > k){
      ile[a[kon]-'A']--;
      wynikAkt -= tab[kon];
      kon++;
    }
    if(wynikMax<wynikAkt){
      wynikMax=wynikAkt;
    }
    
  }
  cout << wynikMax;
  return 0;
}

