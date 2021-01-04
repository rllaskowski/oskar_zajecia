#include <iostream>

using namespace std;

bool czyKrolewska(int l){
    int s = 0;
    while(l != 0){
        if(l%2 == 1){
            s++;
        }
        l/=2;
    }
    if(s % 2 == 0){
        return true;
    }
    return false;
}

int tab[1000000];

int main() {
    int s = 0;
    for(int i = 0;s<1000000;i++){
        if(czyKrolewska(i)){
            s++;
            tab[s]=i;
        }
    }
    int k;
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        int s = 0;
        cin >> k;
        cout << tab[k] << endl;
    }
    return 0;
}