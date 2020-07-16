#include <iostream>
#include <algorithm>

using namespace std;

int patyki[100000];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> patyki[i];
    }

    sort(patyki, patyki+n);

    long long suma = 0;
    int wynik = 0;
    
    for (int i = 0 ; i < n; i++) {
        suma += patyki[i];

        if (suma > patyki[i+1]) {
            wynik = i+2;
        }
    }

    cout << wynik;

    return 0;
}