#include <iostream>

using namespace std;

int skladniki[100000];
int makowiec[100000];
int keks[100000];

int main() {
    int n;
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

  
    
    int wynik = 0;

    for (int m = 0; ; m++) {
        // m to ilosc ugotowanych dotychcasz makowcow
        // sprawdzmy ile mozemy zrobic keksow z pozostalych skladnikow
        int ileKeksow = 1000000000;

        for(int i = 0; i < n;i++){
            // sprawdzamy ile keksow moge zrobic z skladnika o numerze i
            
            if (keks[i] != 0) {
                ileKeksow = min(ileKeksow, skladniki[i]/keks[i]);
            }
        }

        wynik = max(m + ileKeksow, wynik);

        for(int j = 0;j<n;j++){
            skladniki[j]-=makowiec[j];
            if(skladniki[j]<0){
                cout << wynik << endl;
                return 0;
            }
        }
    }

    return 0;
}


