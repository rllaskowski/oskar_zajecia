#include <iostream>
using namespace std;

int tab[10]; //ile mamy kazdego z nawozow

int main() {
    int n;
    int l; 
    string a;
    cin >> n;
    cin >> l;
    cin >> a;
    
    for (int i = 1; i <= n; i++){
        cin >> tab[i];
    }
    for (int i = 0;i < l;i++){
        if(a[i] != 'D'){
            char cyfra = a[i];

            int kategoria = cyfra-'0';
        } 
    }
    
    
    return 0;
}