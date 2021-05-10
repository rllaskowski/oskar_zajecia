#include <iostream>


using namespace std;

const int H = 1 << 15;

struct w{
    int suma;
    int prefiks; 
    int sufiks;
    int przedzial;    
};

struct w tree[H*2];

void insert(int indeks, int liczba){
    indeks+=H;
    tree[indeks].suma = liczba;
    tree[indeks].przedzial = liczba;
    tree[indeks].prefiks = max(0, liczba);
    tree[indeks].sufiks = max(0, liczba);
    while(indeks > 1){
        indeks/=2;
        tree[indeks].suma = tree[indeks*2].suma + tree[indeks*2+1].suma;
        tree[indeks].przedzial = max(max(tree[indeks*2].przedzial, tree[indeks*2+1].przedzial), 
            tree[indeks*2].sufiks + tree[indeks*2+1].prefiks);
        tree[indeks].prefiks = max(tree[indeks*2].prefiks, tree[indeks*2].suma + tree[indeks*2+1].prefiks);
        tree[indeks].sufiks = max(tree[indeks*2+1].sufiks, tree[indeks*2+1].suma + tree[indeks*2].sufiks);
    }
}

int main() {
    


    return 0;
}