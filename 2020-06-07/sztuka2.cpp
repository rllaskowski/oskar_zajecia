#include <iostream>
#include <vector>
using namespace std;

int tab[300][300];

vector<pair<int, int > >poczatki[301];
vector<pair<int, int > >konce[301];

int pref[300];



/*
5 6 4
1 1 1 1
4 1 5 2
1 4 3 6
1 6 5 6


poczatek:
1: (1,1), (4,6), (6,6)
2
3
4: (1,2)
5


koniec:
1: (1,1)
2
3: (4,6)
4
5: (1,2), (6,6)


1 0  -1 0 0 1 -1

1 0  0 1 1 2
0 0  0 1 1 2
0 0  0 1 1 2
1 1  0 0 0 1



*/

int main() {
  int n;
  int m;
  int k;
  int x1, y1, x2, y2;
  
  cin >> n >> m >> k;
  for(int i = 0;i<k;i++) {
    cin >> x1 >> y1 >> x2 >> y2;
   
   pair<int, int> kolumny;
   kolumny.first = y1;
   kolumny.second = y2;
   
   poczatki[x1].push_back(kolumny);
   konce[x2].push_back(kolumny);
  }
  
  
  for(int i = 1;i <= n; i++) {
    for (int j = 0; j < poczatki[i].size(); j++) {
      pair<int, int> para = poczatki[i][j];
          
      pref[para.first] ++;
      pref[para.second+1] --;
    }
    
    int suma = 0;
    
    for(int k = 1;k<=m;k++){
      suma += pref[k];
      
      cout << suma << " ";
    }
    cout << endl;
    
    for (int j = 0; j < konce[i].size(); j++) {
      pair<int, int> para = konce[i][j];
          
      pref[para.first] --;
      pref[para.second+1] ++;
    }

  }  
  return 0;
}

