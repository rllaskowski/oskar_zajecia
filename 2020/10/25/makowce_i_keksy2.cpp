#include <iostream>

using namespace std;

int skladniki[100000];
int makowiec[100000];
int keks[100000];
int n;


bool czyMogeUgotowac(int s) {
    int p = 0;
    int k = s;

    for(int i = 0;i<n;i++){
        if (keks[i] != makowiec[i]) {
            p = max(p, s-(skladniki[i]-s*keks[i]/(makowiec[i]-keks[i]))); 
            k = min(k, skladniki[i]-s*makowiec[i]/(keks[i]-makowiec[i]));
            
            if (p > k) {
                return false;
            }
        }
    }
    return true;
}


int main() {
    cin >> n;
    
    for(int i = 0; i < n;i++){
        cin >> skladniki[i];
    }

    for(int i = 0; i < n;i++){
        cin >> makowiec[i];
    }

    for(int i = 0; i < n;i++){
        cin >> keks[i];
    }

    int p = 0;
    int k = 1000000000;
    int s;
    int wynik = 0;

    while(p <= k){
        s = (p+k)/2;
        if (czyMogeUgotowac(s) == false) {
            k = s-1;
        } else {
            wynik = s;
            p = s+1;
        }
    }

    cout << wynik <<endl;

    return 0;
}


