/**
 * Rozwiazanie zadania Nawozy 
**/
#include <iostream>
using namespace std;


// Ilośc pozostałych nawozów danej kategorii
int nawozy[10];

int main() {
    int n, l;
    int dowolne = 0;
    int pozostale = 0;
    string ogrod;

    cin >> n >> l;
    cin >> ogrod;
    
    for (int i = 1; i <= n; i++){
        cin >> nawozy[i];
    }

    for (int i = 0; i < l; i++) { 
        if(ogrod[i] != 'D'){
            int kategoria = ogrod[i]-'0';

            if (nawozy[kategoria] > 0) {
                nawozy[kategoria]--;
            } else {
                cout << "NIE";
                return 0;
            }
        } else {
            dowolne++;
        }
    }

    for(int i = 0;i < n; i++) {
        pozostale += nawozy[i];
    }

    if(pozostale < dowolne){
        cout << "NIE";
        return 0;
    }

    cout << "TAK";
    return 0;
}