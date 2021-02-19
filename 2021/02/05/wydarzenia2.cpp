#include <iostream>

using namespace std;

int tab[100001];
int nastroj[100001];
// obliczone nr ostatniego wydarzenia
int wyniki[100001];

int ostatnie(int n){
    if(tab[n] == 0){
        return n;
    }
    if(wyniki[n] == 0){
        wyniki[n] = ostatnie(tab[n]);  
    }

    return wyniki[n];
}

int wynik[100000];

int fib(int n) {
    if (n < 1) {
        return 1;
    }

    if (wynik[n] == 0) {
        wynik[n] = fib(n-1)+fib(n-2);
    }
    return wynik[n];
}


int main() {
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> tab[i];
    }
    for(int i = 1;i<=n;i++){
        cin >> nastroj[i];
    }
    for(int i = 1;i<=n;i++){
        cout << nastroj[ostatnie(i)];
    }
    return 0
}