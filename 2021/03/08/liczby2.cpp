#include <iostream>

using namespace std;

int tab[10001];
const int mod = 1000000000;

int main() {
    int n;
    int a;
    long long int s = 1;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> a;
        int x = s-tab[a];
        tab[a]=s%mod;
        s+=x;
        s%=mod;
    }

    cout << ((s-1)+mod)%mod << endl;
    return 0;
}