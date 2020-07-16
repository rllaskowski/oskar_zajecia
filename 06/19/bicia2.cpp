#include<iostream>

using namespace std;

char tab[500][500];
int prefWie[500][500];
int prefKol[500][500];

/*
0 12345
1 PPPPP 
2 PPPPP 
3 PPSPP
4 PPPPP
5 PPPSP
*/

int main(){
  int n;
  int m;
  int k;
  int bicia = 0;
  cin >> n >> m >> k;
  for(int i = 1;i<=n;i++){
    int suma = 0;

    for(int j = 1;j<=m;j++){
      cin >> tab[i][j];
      
      if (tab[i][j] == 'P') {
        suma++;
      }
      
      prefWie[i][j] = suma;
    }
  }
  
  for(int i = 1;i<=m;i++){
    int suma = 0;

    for(int j = 1;j<=n;j++){
      if (tab[i][j] == 'P') {
        suma++;
      }
      
      prefKol[i][j] = suma;
    }
  }
  
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=m;j++){
      if(tab[i][j] == 'S'){
        int l = max(1, j-k);
        int p = min(m, j+k);
        int g = max(1, i-k+1);
        int d = min(n, i+k-1);
        
        cout << l << " " << p << " " << g << " " << d << endl;
        if(i-k>0) {
          /* ile pionkow zbijemy w wierszu i-k */
          bicia += prefWie[i-k][p]-prefWie[i-k][l-1];
        }
        if (i+k<=n) {
          /* ile pionkow zbijemy w wierszu i+k */
           bicia += prefWie[i+k][p]-prefWie[i+k][l-1];
        }
        if(j-k>0) {
          /* ile pionkow zbijemy w kolumnie j-k */
          bicia += prefKol[j-k][g]-prefKol[j-k][d-1];
        }
        if (j+k<=m) {
          /* ile pionkow zbijemy w kolumnie j+k */
           bicia += prefKol[j+k][g]-prefKol[j+k][d-1];
        }
      }
    }
  }
  cout << bicia;
  return 0;
}