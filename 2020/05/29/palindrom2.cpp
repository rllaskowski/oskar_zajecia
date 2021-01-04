#include <iostream>

using namespace std;

/*
      aabcddwxx
pref2 011112223

      ababbbaab
pref3 001223333  
*/

int pref2[100000];
int pref3[100000];

int main() {
  int n;
  int m;
  int x;
  int y;
  string a;
  cin >> n;
  cin >> m;
  cin >> a;
  
  for(int i = 0;i<n;i++){
    if (i+1 < n) {
      pref2[i+1] += pref2[i];
      pref3[i+1] += pref3[i];
    }
    if(i+1 < n && a[i] == a[i+1]){
      pref2[i+1]+=1;
    }
    if(i+2 < n && a[i] == a[i+2]){
      pref3[i+2]+=1;
    }
  }
  
  for(int i = 0;i<m;i++) {
    cin >> x;
    cin >> y;
    
    x--;
    y--;
    
    if (pref2[y]-pref2[x] > 0 || pref3[y]-pref3[x+1] > 0) {
      cout << "TAK" << endl;
    }else{
      cout << "NIE" << endl;
    }
    
    
  }
  return 0;
}

