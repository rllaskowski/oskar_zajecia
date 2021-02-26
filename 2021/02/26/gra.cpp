#include <iostream>
#include <algorithm>

using namespace std;

int tab[201][201];
int pref[201][201];

int main() {
    int n, m;
    cin >> n >> m;
    int s = 0;
    int maks = 0;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin >> tab[i][j];
            pref[i][j]=pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1]+tab[i][j];
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            for(int r = 1;r+i-1<=n&&r+j-1<=m;r++){
                s = pref[i+r-1][j+r-1]-pref[i-1][j]-pref[i][j-1]+pref[i-1][j-1];
                maks = max(s, maks);
            }
        }
    }   
    cout << maks;     
    return 0;
}