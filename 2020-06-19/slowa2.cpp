#include<iostream>

using namespace std;

int tab[26];

int main(){
  int n;
  int k;
  int s = 0;
  int kon = 0;
  long long int slowa = 0;
  string a;
  cin >> n;
  cin >> k;
  cin >> a;
  
  for(int p = 0; p<n; p++) {
    // gąsiennica przesunela glowe na pozycje p
    tab[a[p]-'a']++;
    
    if(tab[a[p] - 'a'] == 1){
      s++;
    }
    
    while (s > k) {
      // przesuwamy koniec gasiennicy o jeden w prawo
      // wiec usuwamy ostatnia litere
      
      tab[a[kon]-'a']--;
      if(tab[a[kon] - 'a'] == 0){
        s--;
      }
      
      kon++;
    }
    
    int x = (p-kon+1);
    
    slowa+=x;
    
  }
  cout << slowa;
  return 0;
}