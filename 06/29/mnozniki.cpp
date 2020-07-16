#include<iostream>

using namespace std;

/*
1296 = 2*2*2*2*3*3*3*3

3345 | 3
1115 | 5
223  | 223

3345 = 3*5*223

wynik = "aaaab"
1

48 = 2*24 = ax
48 = 2*2*12 = aak
48 = 2*2*2*6 = aaae
48 = 2*2*2*2*3 = aaaab

*/

string rozklad(long long a){
  string wynik = "";
  
  while (a > 1) {
    for(int i = 2;i<=a;i++){
      if (i > 27) {
        return "???";
      }
      
      if(a%i==0){
        a/=i;
        wynik.push_back('a'+i-2);
        break;
      }
    }
  }
  return wynik;
}

int main(){
  int n;
  long long a;
  cin>>n;
  for(int i = 0;i<n;i++){
    cin >> a;
    cout << rozklad(a)<<endl;
  }
  return 0;
}