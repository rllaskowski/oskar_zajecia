#include <iostream>
#include <vector>
using namespace std;

int tab[300][300];

vector<pair<int, int > >poczatki[301];
vector<pair<int, int > >konce[301];

int pref[300];


int main() {
  int n;
  int m;
  int k;
  int x1, y1, x2, y2;
  
  cin >> n >> m >> k;
  for(int i = 0;i<k;i++) {
    cin >> x1 >> y1 >> x2 >> y2;
   
   pair<int, int> kolumny;
   kolumny.first = y1;
   kolumny.second = y2;
   
   poczatki[x1].push_back(kolumny);
   konce[x2].push_back(kolumny);
  }
  
  // poczatki[8].size() - ile prostokotow zaczetych w 8 wierszu
  // poczatki[8][3] - para 3 prostokąta rozpoczątego w 8 wierszu
  
  
  // konce[i].size() > 0
  
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      cout << tab[i][j] << " ";
    }
    cout << endl;
  }  
  return 0;
}

