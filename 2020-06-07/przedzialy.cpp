#include <iostream>
using namespace std;


/*
ciag dlugosci n oraz k przedzialow
postaci x, y


dla kazdego pola wypisz ile jest na nim przedzialow


*/

int tab[1000000];

int main() {
  int n;
  int m;
  int k;
  int x, y;
  cin >> n;
  cin >> k;
  for(int i = 0;i<k;i++){
    cin >> x >> y;
    tab[x] += 1;
    tab[y+1] -= 1;
  }
  int suma = 0;
  
  for (int i = 0; i < n ;i++) {
    tab[i] += suma;
    
    cout << tab[i] << " ";
    suma = tab[i];
    
  }
  
  return 0;
}

