#include <iostream>

using namespace std;

int tab[501][501];
pair <int, int> waz[2001];

int main() {
    int w = 0;
    int dl = 1;
    waz[1] = make_pair(1, 1);
    char li;
    int a, b, n, m;
    cin >> a >> b;
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=b;j++){
            cin >> tab[i][j];
        }
    }
    cin >> n >> m;
    for(int i = 0;i<n;i++){
        w = 0;
        cin >> li;
        if(dl < m){
            dl++;
        } 
        for(int j = dl;j > 1;j--){
            waz[j] = waz[j-1];
        }
        if(li == 'N'){
            waz[1].first--;
        }else if(li == 'S'){
            waz[1].first++;
        }else if(li == 'W'){
            waz[1].second--;
        }else{
            waz[1].second++;
        }
        
        for(int j = 1;j<=dl;j++){
            // j to numer segmentu
            // sprawdzmy czy jest on zamaskowany
            // jesli tak to zwiekszmy wynik
            if(tab[waz[j].first][waz[j].second] == j){
                w++;
            }
        }
        cout << w << " ";
    }
    
    return 0;
}