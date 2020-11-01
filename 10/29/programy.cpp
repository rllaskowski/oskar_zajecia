#include <iostream>
#include<algorithm>
#include<string>

using namespace std;

int programy[1000000];
int plyty[1000000];

int n;
int m;
int s = 0;
int szukajOd = 0;

void czyZmiesci(int p){
  for(int i = szukajOd;i<m;i++){
    if(programy[p]<=plyty[i]){
      plyty[i]=0;
      szukajOd = i+1;
      s++;
      return;
    }
  }
}


int main() {
  cin >> n;
  for(int i = 0;i<n;i++){
    cin >> programy[i];
  }
  cin >> m;
  for(int i = 0;i<m;i++){
    cin >> plyty[i];
  }
  sort(plyty, plyty + m);
  sort(programy, programy + n);
  for(int i = 0;i<n;i++){
    czyZmiesci(i);
  }

  cout << s;
  return 0;
}