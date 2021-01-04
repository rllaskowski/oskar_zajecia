#include <iostream>

using namespace std;

/*

haslotoookon
n

n^3

aabababaaaba

n*n

*/


bool czyPalindrom(string slowo, int pocz, int kon) {
  int dlugosc = kon-pocz+1;
  
  for (int i = 0; i < dlugosc/2; i++) {
    if (slowo[i+pocz] != slowo[dlugosc-i-1+pocz]) {
      return false;
    }
  }
  return true;
}


int main() {
  int n;
  string a;
  cin >> n >> a;
  int maks = 0;
  for(int i = 0;i< n;i++){
    for(int j = i;j < n;j++){
      /*
      i jest indeksem poczatku podslowa
      j jest indeksem konca podslowa
      
      chcemy sprawdzic czy slowo od i do j jest palindromem
      */
      if(czyPalindrom(a, i, j)){
        if(maks < j-i+1){
          maks = j-i+1;
        }
      }
      
    }
  }
  cout << maks;
  return 0; 
}