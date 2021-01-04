#include <iostream>

using namespace std;

const int M = 8;
int drzewo[M*2];


// 0 0 0 0 0 0 0 0 

void dodaj(int x, int wartosc) {
    x += M;
    while(x > 0){
        if(drzewo[x] < wartosc){
            drzewo[x] = wartosc;
        }
        x/=2;
    }
}


int chodzenie(int x) {
   // cout << "czesc jestem w " << x << endl;

    int maks = drzewo[x];

    if (x < M) {
        int a = chodzenie(x*2);
        int b = chodzenie(x*2+1);

        if (maks < a) {
             maks = a;
        }

        if (maks < b) {
            maks = b;
        }
    }

    //cout << "papa wychodze z " << x << endl;

    return maks;
}

int main() {
    dodaj(5, 4);
    dodaj(6, 7);
    cout << drzewo[3];
}