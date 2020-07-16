#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int tab[500001];

int nwd (int a, int b){
    if(a < b){
        swap(a, b);
    }
    if(b == 0){
        return a;
    }
    return nwd(a%b, b);
}


int main() {
  int n;
  cin >> n;
  
  for(int i = 0;i<n;i++){
    cin >> tab[i];
  }
  sort(tab, tab + n);
  
  for (int i = 0; i< n; i++) {
     for(int j = i+1; j < n; j++) {
        if(nwd(tab[i], tab[j]) > 1) {
          cout << tab[i] << " " << tab[j];
          return 0;
        }
     }
  }
  cout << "NIE";
  return 0;
}

