#include<iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  string a;
  cin >> a;
  int la = 0;
  int k = 0;
  
  int pnaj = 0, knaj = 0;
  
  
  for(int p = 0;p<n;p++){
    if(a[p]=='a'){
      la++;
    }
    while(la==2){
      if (a[k] == 'a') {
        la--;
      }
      k++;
    }
    
    if (la == 1 && p - k > pnaj - knaj){
      pnaj = p;
      knaj = k;
    }
  
    
  }
  cout << pnaj - knaj + 1 << endl;
  
  // substr(i, x) wycina fragment od długosci x
  // rozpoczynajacy się na indeksie i

  cout << a.substr(knaj, pnaj-knaj+1);
  return 0;
}