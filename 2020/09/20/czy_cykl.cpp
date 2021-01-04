#include <iostream>
#include <vector>

using namespace std;

vector <int> kraw[200001];
bool odw[200001];
bool cykl = false;

void dfs(int a, int p){
  odw[a] = true;
  for (int x : kraw[a]){
    // dla kazdego wierzcholka o numerze x
    // ktory jest polaczony z wierzcholkiem a
    if(odw[x]==false){
      dfs(x, a);
    } else if (x != p){
      // wierzcholek x juz byl odwiedzony, ale nie jest ojcem wierzcholka a 
      cykl = true;
    }
  }
}

int main() {
  int n, m;
  int a, b;
  cin >> n >> m;
  for(int i = 0;i<m;i++){
    cin >> a >> b;
    kraw[a].push_back(b);
    kraw[b].push_back(a);
  }
  
  
  for(int i = 1;i<=n;i++){
    if(odw[i]==false){
      dfs(i, -1);
    }
  }
  
  if (cykl) {
    cout << "TAK" << endl;
  } else {
    cout << "NIE" << endl;
  }
  return 0;
}
