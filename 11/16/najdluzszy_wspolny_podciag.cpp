#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int wyniki[1001][1001];


int main() {
    string a, b;
    cin >> a >> b;

    for(int i = 1;i<=a.size(); i++){
        for(int j = 1;j<=b.size();j++){
            // i jest dluoscia prefiksu slowa a
            // j jest dlugoscia prefiksu slowa b

            // chcemy poznac dlugosc najdl. wspol. podc. dla prefikow
            // o tych dlugosciach

            // zauwazmy ze wynik bedzie conajmniej taki jak gdy
            // utniemy jedna literke ze slowa a = wyniki[i-1][j]
            // albo jedna literke ze slowa b = wyniki[i][j-1]

            wyniki[i][j]=max(wyniki[i-1][j], wyniki[i][j-1]);

            // jesli na koncu obu prefikow jest ta sama litera
            // to utnijmy je i zobaczmy jaki wynik byl dla tych 
            // zmniejszonych prefikow  = wyniki[i-1][j-1]
            // mozemy go przedluzyc o te jedną literke
            // wiec zwiekszyc wynik o 1
            
            if(a[i-1]==b[j-1]) {
                if(wyniki[i-1][j-1]+1 > wyniki[i][j]){
                    wyniki[i][j] = wyniki[i-1][j-1]+1;
                }
            }
        }
    }
    cout << wyniki[a.size()][b.size()];
    return 0;
}