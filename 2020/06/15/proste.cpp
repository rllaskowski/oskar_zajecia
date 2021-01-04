#include<iostream>;

using namespace std;

pair<int, int> proste[100001];

int main(){
  int n;
  cin >> n;
  for(int i = 0;i<n;i++){
    cin >> x1 >> y1 >> x2 >> y2;
    proste[i].first = y2 - y1;
    proste[i].second = x2 - x1;
  }
  
  int pary = 0;
  
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      if(proste[i].first*proste[j].second==proste[j].first*proste[i].second){
        pary++;
      }
    }
    
  }
  cout << pary;
}


/*
n = 

(y_2-y_1) / (x_2-x_1)

prosta i      prosta j
3/10     ==    6/20 

3*20 == 6*10

i j 

*/