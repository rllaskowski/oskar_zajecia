#include<iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  string a;
  cin >> a;
  int s = 0;
  int max = 0;
  for(int i = 0;i<n;i++){
    if(a[i] == 'M'){
      s++;
    }else{
      s--;
      if (s == -1){
        s = 0;
      }
    }
     if(s > max){
        max = s;
      }
  }
  
  cout << max;
  return 0;
}