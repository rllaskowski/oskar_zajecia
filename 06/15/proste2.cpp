#include<iostream>
#include<algorithm>

using namespace std;

pair<int, int> proste[100001];

int nwd(int a, int b){
  if(a<b){
    swap(a, b);
  }
  if(b == 0){
    return a;
  }else{
    return nwd(a%b, b);
  }
}

int main() {
  int x1, x2, y1, y2;
  int n;
  cin >> n;
  for(int i = 0;i<n;i++){
    cin >> x1 >> y1 >> x2 >> y2;
    /* 
    proste[i].first, proste[i].second to odpowiednio
    licznik i mianownik współczynnika kierunkowego prostej 'i'
    */
    proste[i].first = y2 - y1;
    proste[i].second = x2 - x1;
    if (proste[i].second < 0) {
      proste[i].second *= -1;
      proste[i].first *= -1;
    }
    
    int dzielnik = nwd(abs(proste[i].first), abs(proste[i].second));
    
    proste[i].first /= dzielnik;
    proste[i].second /= dzielnik;
  }
  
  int pary = 0;
  sort(proste, proste+n);
  pair<int, int> aktualna = proste[0];
  int ile = 1;
  
  cout << proste[0].first << "  " << proste[0].second << endl;   
  for (int i = 1; i < n; i++) {
    cout << proste[i].first << "  " << proste[i].second << endl;   
    if (proste[i] == aktualna) {
      pary += ile;
      ile++; 
    } else {
      ile = 1;
      aktualna = proste[i];
    }
    
  }
  cout << pary;
}

/*
pary = 0
aktualna = -1

3 6 2 3 2 2 6 2 6
2 2 2 2 3 3 6 6 6


n*(n-1)/2
4 * 3 / 2 = 6

2: 4
3: 2
6: 2

*/