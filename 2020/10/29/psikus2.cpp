#include <iostream>

using namespace std;

int parz[1000001];
int nieParz[1000001];

int main() {
    int n;
    long long int s=0;
    int a;
    long long int w = 0;
    cin >> n;
    parz[0] = 1;
    for(int i = 1;i<=n;i++){
      cin >> a;
      s+= a;
      if(s%2==0){
          w += parz[i-1];
          parz[i] = parz[i-1] + 1;
          nieParz[i]=nieParz[i-1];
      }else{
          parz[i]=parz[i-1];
          nieParz[i]=nieParz[i-1]+1;
          w += nieParz[i-1];
      }
    }
    
    cout << w << endl;
    return 0;
}