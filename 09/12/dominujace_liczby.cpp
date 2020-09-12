#include <iostream>
#include <set>

using namespace std;


int main() {
  int n;
  int a;
  set<int> zbior;
  cin >> n;
  for(int i = 0;i<n;i++){
    cin >> a;
    zbior.insert(a);
  }
  
  
  for (int x: zbior) {
    if (x > 1000) {
      break;
    }
    
    if(zbior.find(x*x)!=zbior.end() && zbior.find(x*x*x)!=zbior.end()){
      cout << x << endl;
      return 0;
    }
  }
  cout << "NIE";
  
  return 0;
}
