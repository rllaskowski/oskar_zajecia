#include <iostream>
#include <queue>

using namespace std;


/*
Labirynt

5 5
..S..
.##.#
..#.K
#.#.#
#...#

21012      
3##2#      
45#34
#6#4#
#765#
*/

char lab[305][305];
int odl[305][305];
bool odw[305][305];

int n;
int m;
queue<pair<int, int> > kolejka;  

void popraw(int x, int y, int jakaOdleglosc) {
  if (x == 0 || x > n || y == 0 || y > m) {
    return;
  }
  
  if(lab[x][y] !='#' && odw[x][y]==false){
    odw[x][y] = true;
    kolejka.push(make_pair(x, y));
    odl[x][y] = jakaOdleglosc;
  }
}
int main() {
  cin >> n >> m;
  
  
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=m;j++){
      cin >> lab[i][j];
      if(lab[i][j]=='S'){  
        kolejka.push(make_pair(i, j));
        odl[i][j] = 0;
        odw[i][j] = true;
      }
    }
  }
  
  while(kolejka.empty() == false){
    // istnieje pole z ktorego chcemy cos rozmyc
    pair <int, int> a = kolejka.front();
    kolejka.pop();
    
    int x = a.first;
    int y = a.second;
    
    popraw(x+1, y, odl[x][y]+1);
    popraw(x-1, y, odl[x][y]+1);
    popraw(x, y+1, odl[x][y]+1);
    popraw(x, y-1, odl[x][y]+1);
  }

  
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=m;j++){
      if (lab[i][j] == 'K') {
        cout << odl[i][j] << endl;
      }
    }
  }
  return 0;
}
