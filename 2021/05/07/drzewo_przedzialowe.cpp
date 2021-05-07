#include <iostream>

using namespace std;

const int M = 1 << 20; // 2 do potegi 20
int tree[2*M]; // drzewo maxów

void insert(int x, int miejsce) {
    miejsce += M;
    tree[miejsce] = x; 
    while(miejsce > 1){
        miejsce /= 2;
        tree[miejsce] = max(miejsce*2, miejsce*2 + 1);
    }
}

int query(int a, int b) {
    // daje maximum od a do b w drzewie

    a += M; // przejsce z nr liscia na nr wierzcholka
    b += M; // przejsce z nr liscia na nr wierzcholka

    int wyn = max(tree[a], tree[b]);

    while(a / 2 == b / 2){
        if(a%2 == 0){
            wyn = max(wyn, tree[a+1]);
        }
        if(b%2 == 1){
            wyn = max(wyn, tree[b-1]);
        }
        a/=2;
        b/=2;
    }

    return wyn;
}


int main() {



    return 0;
}