#include <iostream>


using namespace std;

int grzyby[1001][1001];
int wyniki[1001][1001];
bool obliczony[1001][1001];

int najwiecej(int i, int j) {
    // funkcja ma zwrocic najwieksza ilosc grzybowe, ktore
    // mozemu zebrac docierajac do pola (i, j)

    if(i == 1 && j == 1){
        return grzyby[1][1];
    }

    if (i == 0 || j == 0) {
        return 0;
    }

    if(!obliczony[i][j]){
        obliczony[i][j] = true;
        wyniki[i][j] = max(najwiecej(i-1,j), najwiecej(i, j-1)) + grzyby[i][j];
    }
    

    return wyniki[i][j];
}


int main() {
    int n,m;
    cin >> n>> m;

    for (int i = 1; i <=n ; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> grzyby[i][j];
        }
    }

    cout << najwiecej(n, m);


    return 0;
}