#include <iostream>
#include <algorithm>

using namespace std;

int tab[1000001];
bool odw[1000001];
int wyniki[1000001];

int suma(int i){
    if(i == 0){
        return tab[0];
    }
    int s = -1000000001;
    if(!odw[i]){
        for(int j = i-1;j>i-7 && j >= 0;j--){
            s = max(s, suma(j)+tab[i]);
        }
        wyniki[i]=s;
        odw[i]=true;
    }
    return wyniki[i];
}

int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> tab[i];
    }
    cout << suma(n-1);
    return 0;
}