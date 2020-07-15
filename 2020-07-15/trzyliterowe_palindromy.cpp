#include <iostream>
using namespace std;

/*
012345
aabcba


poLewejA[50000]
011111


ile jest liter a po lewej stronie od kazdej pozycji

*/

int poLewej[26][50000];
int poPrawej[26][50000];

int main() {
  int n;
  cin >> n;
  string slowo;
  cin >> slowo;
  
  
  for (int l = 0; l < 26; l++) {
    /*
    Obliczamy wartosci tablicy poLewej[l]
    
    l+'a'
    */
    
    for (int i = 1; i < n; i++) {
      poLewej[l][i] = poLewej[l][i-1];
      
      if(slowo[i-1]==l+'a'){
        poLewej[l][i]++;
      }
    }
    
    for (int i = n-2; i >= 0; i--) {
      poPrawej[l][i] = poPrawej[l][i+1];
      
      if(slowo[i+1]==l+'a'){
        poPrawej[l][i]++;
      }
    }
  } 
  
  int wynik = 0;
  for(int i = 1;i<n-1;i++){
    for(int j = 0;j<26;j++){
      wynik += poLewej[j][i] * poPrawej[j][i];
    }
  }
  
  cout << wynik;
  return 0;
}

