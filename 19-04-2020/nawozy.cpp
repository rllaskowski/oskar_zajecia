#include <iostream>
using namespace std;

int nawozy[10]; //ile mamy kazdego z nawozow

int main() {
    int n;
    int l;
    int s = 0;
    int g = 0;
    string a;
    cin >> n;
    cin >> l;
    cin >> a;
    
    for (int i = 1; i <= n; i++){
        cin >> nawozy[i];
    }
    for (int i = 0;i < l;i++){
        if(a[i] != 'D'){
            char cyfra = a[i];

            int kategoria = cyfra-'0';

            if (nawozy[kategoria] > 0) {
                nawozy[kategoria]--;
            } else {
                cout << "NIE";
                return 0;
            }
        } else {
            g++;
        }
    }
    for(int i = 0;i<n;i++){
        s += nawozy[i];
    }
    if(s < g){
        cout << "NIE";
        return 0;
    }
    cout << "TAK";
    return 0;
}