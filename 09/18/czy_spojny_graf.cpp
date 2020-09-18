#include <iostream>
#include <vector>

using namespace std;


vector<int> kraw[1000];
bool odw[1000];

/*
n = 5 m = 7

1 2
3 5
2 4
4 3
...

*/

void dfs(int v) {
  /* jestesmy w wierzzcholku o numerze v
  zaznaczmy ze ten wierzcholek zostal juz odwiedzony
  */
  odw[v]=true;
  
  /* przejdzmy sie po wszystkich wierzcholkach z ktorymi
  jest polaczony wierzcholek v */
  for(int i = 0;i<kraw[v].size();i++){
   int x = kraw[v][i];
   if(odw[x]==false){
    dfs(x);
   }
  }
  
}

int main() {
  int n, m;
  int a, b;
  cin >> n >> m;
  for(int i = 0;i<m;i++){
    cin >> a>> b;
    /* wiemy ze miasta o numerach a i b są polączone drogą
    w takim razie zapiszmy to w naszej liscie sasiedztwa
    dodajemy b do listy miast z ktorymi polaczone jest miasto
    o numerze a i na odwrot */ 
    kraw[a].push_back(b);
    kraw[b].push_back(a);
  }
  
  dfs(1);
  
  for(int i = 1;i<=n;i++){
    if(odw[i]==false){
      cout << i << " NIE";
      return 0;
    }
  }
  cout << "TAK";
  return 0;
}
