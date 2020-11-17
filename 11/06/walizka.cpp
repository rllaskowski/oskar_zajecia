#include <iostream>

using namespace std;

int tab[5001][10001];

int main() {
    int n, k, r, u;
    cin >> n >> k;
    for(int i = 1;i<=n;i++){
        cin >> r >> u;
        // i jest iloscia dostepnych przedmitow

        // dostalismy nowy dostepny przedmiot
        // opprawiamy wyniki dla wszystkich rozmiarow
        // plecaka od 0 do k dla i dostepnych przedmiotow
        for(int j = 0;j <= k;j++){
            // rozmiar plecaka to j
            if(r <= j){
                tab[i][j] = max(tab[i-1][j-r]+u, tab[i-1][j]);
            }else{
                tab[i][j] =  tab[i-1][j];
            }
        }
    }
    cout << tab[n][k] << endl;
    return 0;
}