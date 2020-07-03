#include<iostream>

using namespace std;

char tab[301][301];

int main(){
  int n;
  int m;
  cin >> n;
  cin >> m;
  pair<int, int> a;
  pair<int, int> b;
  for(int i = 0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> tab[i][j];
      if(tab[i][j]=='A'){
        // stworz pare i, j
        a = make_pair(i, j);
        
      }else if(tab[i][j]=='B'){
        b = make_pair(i, j);
      }
    }
  }
  while(a != b){
    int przesunKol = 0;
    int przesunWie = 0;
    tab[a.first][a.second] = '#';
    
    if(a.first > b.first){
      przesunWie = -1;
    } else if (a.first < b.first) {
      przesunWie = 1;
    }
    if(a.second > b.second){
      przesunKol = -1;
    }else if (a.second < b.second){
      przesunKol = 1;
    }
    a.first += przesunWie;
    a.second += przesunKol;
  }
  tab[a.first][a.second] = '#';
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      cout << tab[i][j];
    }
    cout << endl;
  }
  return 0;
}