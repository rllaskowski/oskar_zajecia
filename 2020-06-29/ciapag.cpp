#include <iostream>

using namespace std;

int tab[100001];

bool czybyla[100001];

int ciapag(int a){
  int s = 1;
  
  if (czybyla[a] == false){
    czybyla[a]=true;
    s++;
    s += ciapag(tab[a]);
  }
  
  return s;
}

int main() {
  int n;
  int maks = 0;
  cin >> n;
  for(int i = 1;i<=n;i++){
    cin>>tab[i];
  }
  for(int i = 1;i<=n;i++){
    if(czybyla[i]==false){
      int s = ciapag(i);
      if(s > maks){
        maks = s;
      }
    }
  }
  cout << maks;
  return 0;
}