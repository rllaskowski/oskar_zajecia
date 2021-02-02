#include <iostream>

using namespace std;

int tab[40];

int main() {
    int n, m, k;
    char a;
    long long s = 0;
    cin >> n >> m >> k;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> a;
            tab[a-'A']++;
        }
    }
    for(int i = 0;i<40;i++){
        s=(s + tab[i]*(tab[i]-1)/2)%k;
    }
    cout << s%k;
    return 0;
}