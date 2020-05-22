#include <iostream>

using namespace std;    

const int M = 16;
int drzewo[M*2];


void dodaj(int x, int wartosc) {
    x += M;
    while(x > 0){
        if(drzewo[x] < wartosc){
            drzewo[x] = wartosc;
        }
        x/=2;
    }
}


int pytaj(int x, int p, int k, int a, int b) {
    cout << "jestem w " << x << " [ " << p << ", " << k << " ] " <<endl;

    if(p >= a && b >= k){
        cout << "Biore wartosc z " << x << "!!!!" << endl;
        return drzewo[x];
    }

    int s = (p + k) / 2;
    int maks = 0;

    if (a <= s) {
        maks = pytaj(x*2, p, s, a, b);
    }

    if (b >= s+1) {
        int wynik = pytaj(x*2+1, s+1, k, a, b);
        if (wynik > maks){
            maks = wynik; 
        }    
    }
    return maks;
}

int main() {
    dodaj(4, 7);

    cout << pytaj(1, 0, M-1, 2, 6) << endl;

}