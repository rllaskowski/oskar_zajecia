#include<iostream>

using namespace std;

char tab[500][500];

int main(){
  int n;
  int m;
  int k;
  int bicia = 0;
  cin >> n >> m >> k;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      cin >> tab[i][j];
    }
  }
  
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      if(tab[i][j] == 'S'){
        for (int kol = max(0, j-k);kol<=min(j+k, m-1);kol++) {
          if (tab[i-k][kol] == 'P') {
            bicia++;
          }
          if (tab[i+k][kol] == 'P') {
            bicia++;
          }
        }
        for(int wie = max(0, i-k+1);wie<=min(i+k-1, n-1); wie++){
          if (tab[wie][j-k] == 'P') {
            bicia++;
          }
          if (tab[wie][j+k] == 'P') {
            bicia++;
          }
        }
      }
    }
  }
  cout << bicia;
  return 0;
}