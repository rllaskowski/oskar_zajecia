#include <iostream>


using namespace std;


/*
Funkcja czyAnagram sprawdza czy dwie liczby
są anagrammi
czyAnagram(321, 123) -> true
czyAnagram(151, 566) -> false

Sprawdzmy wszystkie liczby z zakresu <1, N>
i wypiszmy te, ktore sa anagramami z N
*/
int tab[10]; // zliczamy cyfry od 0 do 9

bool czyAnagram(int a, int b){
  // tablica tab powinna byc na poczatku wypelniona
  // zerami
  for (int i = 0; i < 10; i++) {
    tab[i] = 0; 
  }
  
  while(a != 0){
    tab[a%10]++;
    a/=10;
  }
  while(b != 0){
    tab[b%10]--;
    b/=10;
  }
  for(int i = 0;i<10;i++){
    if(tab[i] != 0){
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  for(int i = 1; i<=n;i++){
    if (czyAnagram(n, i)) {
      cout << i << endl;
    }
  }
  return 0;
}