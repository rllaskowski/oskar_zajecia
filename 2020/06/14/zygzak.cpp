#include <iostream>
#include <string>

using namespace std;


int nwd(int a, int b){
  cout << a << " " << b << endl;
  if(a < b){
    swap(a, b);
  }
  if(b == 0){
    return a;
  }
  return nwd(a%b, b);
}


int main() {
  int p = 0, g = 0;
  string n;
  cin >> n;
  for(int i = 0;i < n.size();i++){
      if (n[i] == 'P'){
          p++;
      }else{
          g++;
      }
  }
  int x = 0;
  int y = 0;
  
  int najw = nwd(p, g);
  
  p /= najw;
  g /= najw;
  
  for(int i = 0;i<n.size();i++){
    float przekatnaY = ((float)g/p)*x;
    bool wGore = false;
    if (y+1 <= przekatnaY) {
      wGore = true;
    }
    if(wGore == true && n[i]=='P'){
      cout << "NIE";
      return 0;
    }else if(wGore == false && n[i] == 'G'){
      cout << "NIE";
      return 0;
    }
    
    if (wGore) {
      y++;
    } else {
      x++;
    }
  }
  
  cout << g<<"/" << p << endl;
  return 0;

}
/*
f(x) = 5x

f(x) = a*x+b

f(6) = 30 

6*x
10*x

0*x+3 = 3


f(x) = 3*x^2 + 2*x +6


f(x) = (g/p)*x
f(0) = 0
f(p) = g


g = 8
p = 5
x = 4
(g/p)*x = 8/5*4=32/5

PPGPPGPPGPPG
p = 8
g = 4


*/