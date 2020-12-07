#include <iostream>

using namespace std;

int wyniki[1001][1001][2];
bool punkty[1001][1001];

/*
wyniki[i][j][0] to ilosc drog parzystych ktore docieraja do pola

wyniki[i][j][1] to ilosc drog nieparzystych ktore docieraja do pola
*/
int main() {
    int n, m;
    char a;
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin >> a;
            if (a == '.'){
                punkty[i][j] = false;
            } else {
                punkty[i][j] = true;
            }
        }
    }
    
    const int mod = 1000000007;

    wyniki[0][1][0]=1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if (punkty[i][j] == true) {
                wyniki[i][j][0]=(wyniki[i-1][j][1] + wyniki[i][j-1][1])%mod;
                wyniki[i][j][1]=(wyniki[i-1][j][0] + wyniki[i][j-1][0])%mod;
            }else{
                wyniki[i][j][1]=(wyniki[i-1][j][1] + wyniki[i][j-1][1])%mod;
                wyniki[i][j][0]=(wyniki[i-1][j][0] + wyniki[i][j-1][0])%mod;
            }
        }
    }
    cout << wyniki[n][m][0];
    return 0;
}