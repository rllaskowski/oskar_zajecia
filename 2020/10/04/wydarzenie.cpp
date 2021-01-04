#include <iostream>
#include <vector>

using namespace std;
/*
Wejscie:
n m
m krawdzedzi - pary a,b
t
t testow pary a,b 

*/


vector <int> kraw [1000005];

int historia[1000004];
bool czySlyszano[1000004];

void dfs(int a, int b){
  historia[a]=b;
  
  for(int x : kraw[a]){
    dfs(x, b);
  }
}

int main() {
  int wynik = 0;
  int n, t, a;
  cin >> n;
  
  for(int i = 1;i<=n;i++){
    cin >> a;
    
    /*
    Osoba o numerze i usłyszala historę od osoby o numerze a
    Oosoba o numerze a powiedziala historię osobie o numerze i
    */
    
    kraw[a].push_back(i);
  }
  // w wektorze kraw[0] mamy zapisane wszystkie osoby, ktore widzialy zdarzenie
  
  for(int x : kraw[0]){
    dfs(x, x);
  }
  
  cin >> t;
  for(int i = 0;i<t;i++){
    cin >> a;
    
    if(czySlyszano[historia[a]] == false){
      wynik++;
      czySlyszano[historia[a]] = true;
    }
  }
  
  cout << wynik;

  
  
}