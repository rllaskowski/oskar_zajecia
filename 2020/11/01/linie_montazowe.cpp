#include <iostream>
#include <algorithm>

using namespace std;

int wyniki[2][1000000];
int oczek[2][1000000];
int przejscie[2][1000000];

int main() {
    int n;
    cin >> n;

    for (int l = 0; l < 2;  l++) {
        for(int i = 0;i<n;i++){
            cin >> oczek[l][i];
        }
        for(int i = 0;i<n-1; i++){
            cin >> przejscie[l][i];
        }
    }
    
    wyniki[0][0]=oczek[0][0];
    wyniki[1][0]=oczek[1][0];

    for(int i = 1;i<n;i++){
        wyniki[0][i]=min(wyniki[0][i-1], wyniki[1][i-1]+przejscie[1][i-1]);
        wyniki[0][i] += oczek[0][i];
        
        wyniki[1][i]=min(wyniki[1][i-1], wyniki[0][i-1]+przejscie[0][i-1]);
        wyniki[1][i] += oczek[1][i];
    }
    cout << min(wyniki[0][n-1], wyniki[1][n-1]);
    return 0;
}