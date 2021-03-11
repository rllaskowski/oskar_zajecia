#include <iostream>
#include <map>

using namespace std;

map <int, pair<int, int>> tab;

int j = 0;

void sito(int n){
    for(int i = 1;i<=n/3;i++){
        if(n%i == 0){
            tab[j].first = i;
            tab[j].second = n/i;
            j++;
        }
    }
}

int main(){
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    long long int w = c * d;
    sito(w);
    int n = j;
    for(int i = 0;i<n;i++){
        if(a >= tab[i].first && b >= tab[i].second || a >= tab[i].second && b >= tab[i].first){
            cout << "TAK";
            return 0;
        }
    }
    cout << "NIE";
    return 0;
}