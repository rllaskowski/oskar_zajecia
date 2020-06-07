#include <iostream>

using namespace std;


/*
1 . 3 1  
6 5 4 1
1 1 1 1
1 1 1 1
1 1 1 .
1 1 1 1
*/

pair <int, int> tab[90001];

int bezw(int x) {
  if(x < 0){
    x*=-1;
  }
  return x;
}


int droga(pair<int, int> a, pair<int, int> b) {
  int w = bezw(a.first-b.first);
  int k = bezw(a.second-b.second);
  return max(w, k);
}

int main() {
  int s=0;
  int n;
  int m;
  cin>>n>>m;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      int a;
      cin >> a;
      tab[a].first = i;
      tab[a].second = j;
    }
  }
  for(int i = 1;i<n*m;i++){
    s+=droga(tab[i], tab[i+1]);
  }
  cout << s;
  return 0;
}

