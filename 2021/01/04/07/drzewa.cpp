#include <iostream>

using namespace std;

char drzewa[1000001];
bool drzewo[1000001];
int roznica[1000001];

int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> drzewa[i];
        if(drzewa[i] == 'J'){
            drzewo[i] = true;
            roznica[i] = roznica[i-1]+1;
        }else{
            drzewo[i] = false;
            roznica[i] = roznica[i-1]-1;
        }
    }
    int s = 0;
    int hs = 0;
    int ps = 0;
    int d2 = 0;
    int l = 1;
    for(int i = 2;i<=n-3;i++){
        s = 0;
        ps = 0;
        hs = 0;
        l = 1;
        s = roznica[i-1];
        // s to roznica drzew w pierwszym przedziale
        // przejdzmy po wszystkich kandydatach na drugie drzewko
        // do wykarczowania i sprawdzmy czy jest dobre
        for(int g = i+2;g<n;g++){
            // g jest numerem drugiego drzewka
            if(drzewo[g-1]){
                ps++;
            }else{
                ps--;
            }
            if(s == ps){
                // chcemy roznice od g+1 do n
                hs = roznica[n] - roznica[g];
                if(hs == s){
                    cout << i << " " << g;
                    return 0;
                }
            }
        }
    }
    cout << "BRAK";
    return 0;
}