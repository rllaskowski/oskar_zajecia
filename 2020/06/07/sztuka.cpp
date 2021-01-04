#include <iostream>
using namespace std;

/*
5 5 3
(1,1) (5,5)
(2,2) (4,4)
(3,3) (3,3)


1 1 1 1 1
1 2 2 2 1
1 2 3 2 1
1 2 2 2 1
1 1 1 1 1


*/

int tab[300][300];

void pomaluj(int x1, int y1, int x2, int y2) {
  for(int i = x1;i <= x2;i++){
    for(int j = y1; j <= y2;j++) {
      tab[i][j] += 1;
    }
}
}

int main() {
  int n;
  int m;
  int k;
  int x1, y1, x2, y2;
  
  cin >> n >> m >> k;
  for(int i = 0;i<k;i++) {
    cin >> x1 >> y1 >> x2 >> y2;
    pomaluj(x1-1, y1-1, x2-1, y2-1);
  }
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      cout << tab[i][j] << " ";
    }
    cout << endl;
  }  
  return 0;
}

