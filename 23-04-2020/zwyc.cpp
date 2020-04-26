#include <iostream>
using namespace std;

int tab[40];

int main() {
    int n;
    int s=0;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> tab[i];
        if(tab[i] > s){
            s = tab[i];
        }
        }
    for(int i = 0;i < n;i++){
        if(tab[i] == s){
            cout << (char)('A'+ i);
        }
    }

    return 0;
}