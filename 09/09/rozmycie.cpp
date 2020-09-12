#include <iostream>

using namespace std;

char tab[305][305];

/*
12100
23210
12121
01232

 
  01234

0 00232
1 00020
2 00200
3 02320
4 00200

kolejka: (0,4) (1,3) (2,2) (3,1) (3,3) (4,2)

*/
int main() {
  int n;
  int m;
  cin >> n >> m;
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=m;j++){
      cin >> tab[i][j];
    }
  }

  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=m;j++){
      if(tab[i][j]=='3'){
        if(tab[i+1][j]=='0'){
          tab[i+1][j]='2';
        }
        if(tab[i-1][j]=='0'){
          tab[i-1][j]='2';
        }
        if(tab[i][j+1]=='0'){
          tab[i][j+1]='2';
        }
        if(tab[i][j-1]=='0'){
          tab[i][j-1]='2';
        }
      }
    }
  }
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=m;j++){
      if(tab[i][j]=='2'){
        if(tab[i+1][j]=='0'){
          tab[i+1][j]='1';
        }
        if(tab[i-1][j]=='0'){
          tab[i-1][j]='1';
        }
        if(tab[i][j+1]=='0'){
          tab[i][j+1]='1';
        }
        if(tab[i][j-1]=='0'){
          tab[i][j-1]='1';
        }
      }
    }
  }
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=m;j++){
      cout << tab[i][j];
    }
    cout << endl;
  }
  return 0;
}
