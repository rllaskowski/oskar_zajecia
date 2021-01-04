#include <iostream>
using namespace std;

int tab[30001];
bool odw[30001];

int main() {
  int n;
  int a;
  int x;
  int s = 0;
  cin >> n;

  for(int i = 1;i<=n;i++){
    cin >> tab[i];
  }

  for(int i = 1;i<=n;i++){
    if(odw[i]==false){
        s++;
        x= tab[i];
        while(odw[x]==false){
        odw[x]=true;
        x=tab[x];
        }
    }
  }
  cout << s;
  return 0;
}
