#include <iostream>

using namespace std;

int tab[20];
int wyniki[20];

int n;

int x = 0;

int licz(int j){
    x += 1;
    int h = 1;
    if(wyniki[j]==0){
        for(int i = j+1;i<n;i++){
            if(tab[j]!=tab[i]){
                h+=licz(i);
            }
        }
        wyniki[j]=h;
    }
    return wyniki[j];
}

int main() {
    cin >> n;
    int s = 0;
    for(int i = 0;i<n;i++){
        cin >> tab[i];
    }
    for(int i = 0;i<n;i++){
        s+=licz(i);
    }
    cout << x << endl;
    cout << s;
    return 0;
}