#include<iostream>

using namespace std;

int tab[26];

int main(){
  int n;
  int k;
  int s;
  int l;
  long long int slowa = 0;
  string a;
  cin >> n;
  cin >> k;
  cin >> a;
  
  for(int i = 0;i<n;i++){
    l = i;
    s = 0;
    while (l < n && s <= k) {
      // poszerzamy slowo o kolejne litery
      // i - indeks poczatku slowa, l - indeks konca slowa
      
      char litera = a[l];
      
      tab[litera-'a']++;
      if(tab[litera - 'a'] == 1){
        s++;
      }
      
      if (s <= k) {
         slowa++; 
      }
     
      l++;
    }
    for(int i = 0;i<26;i++){
      tab[i] = 0;
    }
  }
  cout << slowa;
  return 0;
}