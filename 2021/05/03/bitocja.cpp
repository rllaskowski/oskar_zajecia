#include <iostream>

using namespace std;

int n, k, m;

int miasta[100][100];
int wyn[100][100];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, w;
    cin >> n >> k >> m;

    for (int i=1; i<= n; i++) {
        for (int j= 1; j <= n; j++) {
            miasta[i][j] = 2000*1000*1000;
        }
        miasta[i][i] = 0;
    }


    for(int i = 0;i<k;i++){
        cin >> a >> b >> w;
        miasta[a][b] = min(w, miasta[a][b]);
        miasta[b][a] = min(miasta[b][a], w);
    }
    
    for (int i = 1;i<=n;i++){
        // i jest numerem wierzchola, ktorym chcemy poprawiac
        // trasy pomiedzy kazda para wierzcholkow
        for(int j = 1;j<=n;j++){
            for(int h = 1;h<=n;h++){
                // chcemy za pomoca wierzchoka i poprawic trase 
                // j ~> h.
                if(miasta[j][h] > miasta[j][i] + miasta[i][h]){
                    miasta[j][h] = miasta[j][i] + miasta[i][h];
                }
            }
        }
    }

    // teraz w miasta[a][b] jest najkrotsza trasa pomiedzy a i b

    for(int i = 0;i<m;i++){
        cin >> a >> b >> w;
        // dochodzi nowa krawedz od a -> b
        // sprawdzmy czy poprawi ona trase 1~>n
        int s = min(miasta[1][a] + miasta[b][n], miasta[1][b] + miasta[a][n]) + w;
        if(s < miasta[1][n]){
            // to znaczy ze nalezy wybudowac nasza droge i poprawic zawartosc naszej tablicy
            cout << 1 << endl;
            for(int j = 1;j<=n;j++){
                for(int h = 1;h<=n;h++){
                    // chcemy poprawic trase j~>h nowa krawedzią
                    int c =  min(miasta[j][a] + miasta[b][h], miasta[j][b] + miasta[a][h]) + w;
                    if(miasta[j][h] > c){
                        miasta[j][h] = c;
                    }
                }
            }
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}