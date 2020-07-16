

#include<iostream>

using namespace std;

int nwd(int a, int b){
  if (a<b){
    swap(a, b);
  }
  if(b==0){
    return a;
  }else{
    return nwd(b, a%b);
  }
}
long long nww(long long int a,long long int b){
  return a*b / nwd(a, b);
}
/*
a = 2 n = 9
b = 3 m = 7

A = 2 4 6 8 10 12 14 16 18 
B = 3 6 9 12 15 18
A U B = {6}

a = 1 n = 10
b = 1 m = 10

A = 1 2 3 .. 10
B = 1 2 3 .. 20
*/

int main(){
  int t;
  cin >> t;
  for(int i = 0;i<t;i++){
    long long  a, b, n, m;
    cin >> a >> n >> b >> m;
    int nwW = nww(a, b);
    cout << min(a*n/nwW, b*m/nwW) << endl; 
  }
  
  return 0;
}