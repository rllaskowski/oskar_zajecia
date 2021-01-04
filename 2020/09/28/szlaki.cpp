#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool odw[1000003];
vector<int> kraw[1000003];

void dfs(int a){
  odw[a]=true;
  
  for(int x : kraw[a]){
    if(odw[x]==false){
      dfs(x);
    }
  }
}

int main() {
  int n, m, k, a, b, x, y;

  cin >> n >> m >> a >> b;
  
 
  for(int i = 0;i<m;i++){
    cin >> x >> y;
    kraw[x].push_back(y);
    kraw[y].push_back(x);
  }
  dfs(a);
  if(odw[b] == true){
    cout << "TAK";
  }else{
    cout << "NIE";
  }

  return 0;
}