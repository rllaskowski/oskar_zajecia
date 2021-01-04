#include <iostream>

using namespace std;

int ileKw[100001];

int main() {
    int n;
    cin >> n;

    ileKw[0] = 0;

    for (int i = 1; i <= n; i++) {
        // chcemy obliczyc wynik dla liczby i
        // znamy juz wynik dla liczb od 0 do i-1
        // przejdzmy po wszystkich liczbach j
        // takich ze j^2 <= i 
        
        // liczbe i moge zapis98ac jako 1^2+1^2+...1^2 i razy
        int wynik = i;

        for(int j = 1;j*j<=i;j++){
            // i mogę zapisać jako i = j^2 + r
            // zostalo nam do zsumowania r = i-j^2
            // ale my juz wiemy za pomoca jakiej ilosci kwadratow
            // mozemy reprezentowac i-j^2 = ileKw[i-j^2]
            wynik = min(wynik, ileKw[i-j*j]+1);
        }
        
        ileKw[i]=wynik;
    }

    cout << ileKw[n];
    return 0;
}