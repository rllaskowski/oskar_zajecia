#include <iostream>

using namespace std;

int suma(long long int liczba){
    // oblicza sume cyfr liczby
    int wynik=0;
    wynik+=liczba%10;
    liczba/=10;
    if(liczba!=0){
        wynik+=suma(liczba);
    }
    return wynik;
}

// trzymamy kiedy ostatnio odwiedzona byla
// dana liczba - 0 oznacza, ze nigdy
int odw[400];

int main() {
    long long int n, x;

    cin >> n >> x;
    int dlugosc;

    if (n == 1) {
        cout << x << endl;
        return 0;
    }

    int i = 2;
    x = suma(x)*2;

    while (i < n && odw[x] == 0) {
        odw[x]=i;
        x = suma(x)*2;
        i++;
    }
  
    if(i != n) {
        // dlugosc cyklu
        dlugosc = i - odw[x];
        // zostalo tyle do obliczenia
        int ileJeszcze = (n - i) % dlugosc;
        for(int j = 0;j<ileJeszcze;j++){
            x = suma(x)*2;
        }
    }
    
    cout << x;
    return 0;
}