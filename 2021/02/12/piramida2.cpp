#include <iostream>

using namespace std;

char tab[1000009];
int wyniki[1000009];

int n, m;

int naIleSposobow(int h){
    int s = 0;
    if(tab[h] == '0'){
        return 0;
    }
    if(h == 0){
        return 1;
    }
    if(wyniki[h]==0){
        for(int i = h-1;i>=0 && i>h-7;i--){
            s+=naIleSposobow(i);
        }
        wyniki[h] = s%m;
    }
    
    return wyniki[h];
}

int main(){
    cin >> n >> m;
    for(int i = 0;i<n;i++){
        cin >> tab[i];
    }
    cout << naIleSposobow(n-1);
    return 0;
}