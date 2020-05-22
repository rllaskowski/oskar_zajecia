/**
 * Rozwiązanie zadania Halloween 
 * Podejście naiwne - przechodzenie po przedziale
 * przy każdym zapytaniu
**/

#include <iostream>
using namespace std;

int cukierki[100001];

int main() { 
    int t, n;
    int pocz, kon;
    int suma;

    cin >> t;
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        cin >> cukierki[i];
    }

    for(int i = 0 ; i < t ; i++){
        cin >> pocz;
        cin >> kon;
        
        suma = 0;

        for (int j = pocz; j <= kon; j++) {
            suma += cukierki[j];
        }
       
        cout << suma << endl;
    }
    
    return 0;
}