#include <iostream>
#include <unordered_map>
using namespace std;

void tablica(int tab[], int n){
    for(int i = 0;i<n;i++){
        cout << i << "|";
    }
    cout << endl;

    for(int i = 0;i<n;i++){
        cout << tab[i] << "|";
    }
    cout << endl;
}

void tablica2(int **tab, int n, int m){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout << tab[i][j] << "";
        }
    }
}

void DEBUG(string nazwa, int zmienna) {
    cout << nazwa << ": " << zmienna;
}


int main() {
    long long a = 1000000;
    int b = 1000000;

    cout << a * b << endl;
    unordered_map<int, int> m;
    
    m[1] = 3;
    m[0] = 7;
    m[2] = 10;

    for (pair<int, int> el : m) {
        cout << el.first << "->" << el.second << endl;;
    }
    
    int res;

    for (int i = 0;i < 10; i++) {
        res += 1;
    }

    cout << res << endl;

    return 0;
}