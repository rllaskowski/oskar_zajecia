#include <iostream>

using namespace std;

int ilePierwszych[10000];


bool czyPierwsza(int x) {
    if (x < 2) {
        return false;
    }
    for(int i = 2; i*i <= x;i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

/*
liczba              0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17
czyPierwsza:        0 1 1 0 1 0 1 0 0 0  1  0  1  0  0 0  0  1
ilePierwszych:      0 1 2 2 3 3 4 4 4 4  5  5  6  6  6 6  6  7
*/


int main() {
    for (int i = 2; i < 10000; ++i) {
        ilePierwszych[i] = ilePierwszych[i-1];
        if (czyPierwsza(i)){
            ilePierwszych[i] += 1;
        }
        
    }

    int t;
    int p;
    int k;
    int s;
    cin >> t;

    for(int i = 0;i<t;i++){
        cin >> p;
        cin >> k;
        

        cout << ilePierwszych[k] - ilePierwszych[p-1] << endl;
    }


    return 0;
}