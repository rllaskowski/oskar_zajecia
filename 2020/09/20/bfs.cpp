#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <int> kraw[1000001];
int odl[1000001];
bool odw[1000001];

int main() {
  int n, m;
  int a, b;
  int s = 0;
  cin >> n >> m;
  for(int i = 0;i<m;i++){
    cin >> a >> b;
    kraw[a].push_back(b);
    kraw[b].push_back(a);
  }
  int c;
  queue<int> kolejka;
  kolejka.push(0);
  odl[0]=0;
  odw[0]=true;
  while(kolejka.size()>0) {
    c = kolejka.front();
    kolejka.pop();
    for(int x : kraw[c]){
      if(odw[x]==false){
          odl[x]=odl[c]+1;
          odw[x]=true;
          kolejka.push(x);
      }
    } 
  }
  for(int i = 1;i<=n;i++){
    s+=odl[i];
  }
  cout << s*2;
  return 0;
}
