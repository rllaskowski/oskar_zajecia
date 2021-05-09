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
    a += M; // przejsce z nr liscia na nr wierzcholka
    b += M; // przejsce z nr liscia na nr wierzcholka

    int wyn = max(tree[a], tree[b]);

    while(a / 2 != b / 2){
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

int pLewo[1000001]; // osoba na jakim indeksie przeszkadza nam po lewej stronie
int pPrawo[1000001]; // osoba na jakim indeksie przekszadza nam po prawej stronie
int osoby[1000001];
int pre[1000001];

int suma(int a, int b){
    return pre[b] - pre[a-1];
}

int main() {

    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> osoby[i];
        pre[i] = pre[i-1] + osoby[i]; 
    }

    for(int i = 1;i<=n;i++){
        pLewo[i] = query(0, osoby[i]-1);
        insert(i, osoby[i]);
    }
    
    for(int i = 1;i < 2*M;i++){
        tree[i] = -(n+1);
    }

    for(int i = n;i>=1;i--){
        pPrawo[i] = -query(0, osoby[i]-1);
        insert(-i, osoby[i]);
    }
    int w = 0;

    for (int i=1; i <= n; i++) {
        // uznajmy ze i jest indeksem osoby, ktora jest najslabszym ogniwem
        // probujemy zbudowac jak najwiekszy zespol
        int h = suma(pLewo[i]+1, pPrawo[i]-1) * osoby[i];
        w = max(w, h);
    }
    cout << w;
    return 0;
}