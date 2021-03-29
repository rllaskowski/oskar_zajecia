#include <iostream>

using namespace std;

/*
Ilość lisci, nr pierwszego liścia
*/
const int L = 1 << 17;

int tree[L*2];

/* 
a - indeks
b - wartosc 
*/
void insert(int a, int b){
    a+=L;
    tab[a] = b;
    while(a > 1){
        a/=2;
        tree[a] = min(tree[a*2], tree[a*2+1]);
    }
}

/*
p, k <- poczatek koniec prze
dzialu zapytania
v <- wierzcholek w ktorym jestesmy
a, b <- przedzial wierzcholka
*/
int query(int p, int k, int v, int a, int b){
    long long int wynik = 1000000000;
    if(a >= p && b <= k){
        return tree[v];
    }
    int s = (a + b) / 2;
    if(s >= p){
        wynik = query(p, k, v*2, a, s)
    }
    if(s < k){
        wynik = min(wynik, query(p, k, v*2+1, s+1, b));
    }
    return wynik;
}

int query(int p, int k) {
    return query(p, k, 1, 0, L-1);
}

int main() {
    query(1, 2,3 ,4 ,5);

    return 0;
}