#include <iostream>
#include <map>

using namespace std;

int main() {
  map<int, int> ostatniKoralik;
  
  int n;
  int koralik;
  int minim = 1000000;
  cin >> n;
  for(int i = 1;i<=n;i++){
    cin >> koralik;
    
    if (ostatniKoralik[koralik] != 0) {
      if(minim > i - ostatniKoralik[koralik] - 1){
        minim = i - ostatniKoralik[koralik] - 1;
      }
    }
    ostatniKoralik[koralik]=i;
  }
  
  cout << minim;
  return 0;
}