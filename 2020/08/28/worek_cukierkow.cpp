#include <iostream>
#include <set>

using namespace std;

/*
Jasiek dorzucał do worka cukierki róznego typu

Za kazdym razem gdy dorzuca cukierek chce wiedzieć czy cukierek
tego typu byl juz w worku.

Jesli cukierek tego typu znajdował się już w woroku wypisz TAK, 
lub NIE w przecinwnym przypadku

n <= 10^5
typ cukierka - c <= 10^9 

Przykad ł
n = 5
1   NIE
2   NIE
1   TAK
5   NIE
2   TAK
*/


int main() {
  set<int> worek;
  int n;
  int a;
  cin >> n;
  for(int i = 0;i<n;i++){
    cin >> a;
    if (worek.find(a) == worek.end()) {
      cout << "NIE" << endl;
      worek.insert(a);
    }else{
      cout << "TAK" << endl;
    }
  }

  return 0;
}