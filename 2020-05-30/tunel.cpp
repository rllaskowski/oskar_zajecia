#include <iostream>

using namespace std;

int tab[1000000];

int main() {
  int n;
  int osoby;
  int o;
  cin >> n;

  for(int i = 0;i<n;i++){
    cin >> tab[i];
  }
  cin >> osoby;
  int naj = n;
  for(int i=0;i<osoby;i++) {
    cin >> o;
    int m = 0;
    while(m < naj && tab[m] <= o){
      m++;
    }
    
    if(m == n){
      cout << -1 << " ";
    } else {
      naj = m-1;
      cout<<m<<" ";
    }
  }  return 0;
}

