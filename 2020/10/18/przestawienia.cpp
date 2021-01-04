#include <iostream>

using namespace std;

int tab[1001];
char plansza[1001][1001];

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        cin >> tab[i];
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin >> plansza[i][j];
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cout << plansza[tab[i]][j];
        }
        cout << endl;
    }
    return 0;
}