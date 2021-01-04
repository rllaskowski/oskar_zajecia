#include <iostream>

using namespace std;

int main() {
  int n, k, w, a, s, wynik = 0;
  cin >> n >> k >> w;
  s = 1;
  for(int i = 0;i<n;i++){
    cin >> a;
    if(a <= w){
      s++;
    }else{
      wynik += max(0, s-k);
      s = 1;
    }
  }
  
  wynik += max(0, s-k);
  cout << wynik;
  
  return 0; 
}