#include <iostream>

using namespace std;

int tab[100003];
long long wyniki[100003];
/*

10 3
6 2 5 3 4 8 1 7 5 6

4
10
1
8
3


wyniki:
1 2 3 4 5  6  7  8  9 10
6 2 5 9 6 13 10 13 18 16

*/

int main() {
  int n;
  int l;
  cin >> n >> l;
  for(int i = 1;i<=n;i++){
    cin >> tab[i];
    wyniki[i] = tab[i];
    
    if (i-l >= 1) {
      wyniki[i] += wyniki[i-l];
    }
  }
  
  int q;
  int k;
  cin >> q;

  for(int i = 0;i<q;i++){
      
    cin >> k;
    
    cout << wyniki[k] << endl;
    
  } 
  return 0;
}