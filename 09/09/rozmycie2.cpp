#include <iostream>
#include <queue>

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

kolejka.pop();
kolejka.front()

kolejka.push()
kolejka.empty();

*/
int main() {
  int n;
  int m;
  cin >> n >> m;
  
  
  queue<pair<int, int> > kolejka;  
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=m;j++){
      cin >> tab[i][j];
      if(tab[i][j]=='3'){  
        kolejka.push(make_pair(i, j));
      }
    }
  }
  
  while(kolejka.empty() == false){
    // istnieje pole z ktorego chcemy cos rozmyc
    pair <int, int> a = kolejka.front();
    kolejka.pop();
    
    int x = a.first;
    int y = a.second;
    
    
    if(x+1 <= n && tab[x+1][y]=='0'){
      tab[x+1][y]=tab[x][y]-1;
      if (tab[x+1][y] != '1') {
        kolejka.push(make_pair(x+1, y));
      }
    }
    if(x-1 > 0 && tab[x-1][y]=='0'){
      tab[x-1][y]=tab[x][y]-1;
      if (tab[x-1][y] != '1') {
        kolejka.push(make_pair(x-1, y));
      }
    }
    if(y-1 > 0 && tab[x][y-1]=='0'){
      tab[x][y-1]=tab[x][y]-1;
      if (tab[x][y-1] != '1') {
        kolejka.push(make_pair(x, y-1));
      }
    }
    if(y+1 <= m && tab[x][y+1]=='0'){
      tab[x][y+1]=tab[x][y]-1;
      if (tab[x][y+1] != '1') {
        kolejka.push(make_pair(x, y+1));
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
