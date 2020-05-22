#include <iostream>

using namespace std;

int tab[500][500];
bool czyByla[500];
int n;

bool czyDobryW(int i){
    for(int j= 1; j <= n; j++) {
        czyByla[j] = false;
    }
    for(int j = 0;j<n;j++){
        int liczba = tab[i][j]; 
        if(czyByla[liczba] == false) {
            czyByla[liczba] = true;
        } else {
            return false;
        }
    }
    return true;
}

bool czyDobryK(int i){
    for(int j= 1; j <= n; j++) {
        czyByla[j] = false;
    }
    for(int j = 0;j<n;j++){
        int liczba = tab[j][i]; 
        if(czyByla[liczba] == false) {
            czyByla[liczba] = true;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>tab[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        if(czyDobryK(i) == false || czyDobryW(i) == false){
            cout << "NIE" << endl;
            return 0;
        }

    }
    cout << "TAK" << endl;
    return 0;
}