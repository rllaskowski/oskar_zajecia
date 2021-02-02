#include <iostream>

using namespace std;

int tab[1001][1001];
int poziome[1001][1001];
int pionowe[1001][1001];
/*
7
1 4
3 5
3 6
2 4
2 6
1 5
2 5

*/
int main() {
    int n, a, b;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> a;
        cin >> b;
        tab[a][b]++;
    }
    for(int i = 0;i<1001;i++){
        // i jest wierszem ktory obslugujemy
        int k = 0;
        int l = 0;
        int p = 0;
        for(int j = 0;j<1001;j++){
            k+=tab[i][j];
        }
        p = k;
        for(int j = 0;j<1001;j++){
            p-=tab[i][j];
            poziome[i][j] = p * l;
            l+=tab[i][j];
        }
        // i jest kolumna ktory obslugujemy
        k = 0;
        l = 0;
        for(int j = 0;j<1001;j++){
            k+=tab[j][i];
        }
        p = k;
        for(int j = 0;j<1001;j++){
            p-=tab[j][i];
            pionowe[j][i] = p * l;
            l+=tab[j][i];
        }
    }
    int s = 0;
    for(int i = 0;i<1001;i++){
        for(int j = 0;j<1001;j++){
            s += poziome[i][j] * pionowe[i][j];
        }
    }
    cout << s;
    return 0;
}