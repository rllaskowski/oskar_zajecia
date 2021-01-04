#include <iostream>

using namespace std;

/*

haslotoookon
n

n^3

0123456789
aabababaab

i = 7

7 8 i,i+1
6 9 i-1 i+2
5 10 i-2, i+3
n*n

*/


int main() {
  int n;
  string a;
  cin >> n >> a;
  int maks = 0;
  for(int i = 0;i<n;i++){
  /* chcemy znalezc najdluszy palindrom ktory ma srodek na ideksie i */
    int k = 0; /* dlugosc "skrzydelka" palindromu */
    
    while(i+k+1<n && i-k-1 >= 0 && a[i-k+1]==a[i-k-1]) {
      k++;
    }
    
    if(k*2+1 > maks){
      maks = k*2+1; 
    }
  }
  
  for(int i = 0;i<n;i++){
  /* chcemy znalezc najdluszy palindrom ktory ma srodek na ideksie i */
    int k = 0; /* dlugosc "skrzydelka" palindromu */
    
    while(i+k+1<n && i-k >= 0 && a[i-k+1]==a[i-k]) {
      k++;
    }
    
    if(k*2 > maks){
      maks = k*2;
    }
  }
    
  
  cout << maks;
  return 0; 
}