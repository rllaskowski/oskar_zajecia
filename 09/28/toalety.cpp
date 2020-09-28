#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int odl[1000003];
bool odw[1000003];
int toalety [100003];
vector<int> kraw[1000003];


void bfs() {
  /*
  Wykona algorytm BFS zaczynajac od wierzcholka 1
  */
  
  queue<int> kolejka;
  odl[1] = 0;
  odw[1] = true;
  kolejka.push(1);
  int x;  
    
  cout << "Wstawiam wierzcholek 1 na kolejke z odlegloscia 0" << endl;
  
  while(kolejka.size() > 0){
     x = kolejka.front();
     kolejka.pop();
    
      cout << "Sciagam z kolejki wiercholek " << x << endl;
    
     for(int v : kraw[x]) {
      if(!odw[v]){
        odw[v] = true;
        odl[v] = odl[x]+1;
        cout << "Wstawiam wierzcholek " << v << " na kolejke z odlegloscia " << odl[v] << endl;
        kolejka.push(v);
      }
     } 
  }
}

int main() {
  int n, m, k, a, b, minim = 2000000000;
  bool czyOdwiedzona = false;
  
  cin >> n >> m >> k;
  
  for(int i = 2;i<=k+1;i++){
    cin >> toalety[i];
  }
  for(int i = 0;i<m;i++){
    cin >> a >> b;
    kraw[a].push_back(b);
    kraw[b].push_back(a);
  }
  
  bfs();
  for(int i = 2;i<=k+1;i++){
    if(odw[i] && odl[i]*100+toalety[i]<minim){
      minim = odl[i]*100+toalety[i];
      czyOdwiedzona = true;
    }
  }
  
  if (czyOdwiedzona) {
    cout << minim;  
  } else {
    cout << -1;  
  }
  return 0;
}