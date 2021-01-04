#include <iostream>

using namespace std;

int wyniki[20][20];

int main() {
    int n;
    cin >> n;
    wyniki[1][0]=1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            wyniki[i][j]=wyniki[i-1][j] + wyniki[i][j-1];
        }
    }
    cout << wyniki[n][n];
    
    return 0;
}