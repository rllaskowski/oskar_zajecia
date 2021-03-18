#include <iostream>

using namespace std;

int tab[1000001];
int ranga[100001];

int Find(int x) {
    if(x != tab[x]){
        tab[x]=Find(tab[x]);
        return tab[x];
    }else{
        return x;
    }
}

void Union(int a, int b) {
    // chcemy polaczyc zbiory w ktorych
    // sa wierzcholki a i b
    // mocno przyspieszamy alg jesli mniejszy zbior podlaczymy
    // do wiekszego
    int repA = Find(a);
    int repB = Find(b);

    if(ranga[repA]<ranga[repB]){
        tab[repA]=repB;
        ranga[repB] += ranga[repA];
    } else {
        tab[repB]=repA;
        ranga[repA] += ranga[repB];
    }
}


int main() {


    return 0;
}