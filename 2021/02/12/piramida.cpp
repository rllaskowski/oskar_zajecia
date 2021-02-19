#include <iostream>

using namespace std;

char tab[1000009];

int n, m;

int przeskok(int h){
    if (h == n-1) {
        return 1;
    }
    int s = 0;
    for(int i = h+1;i<=h+6;i++){
        if(tab[i]=='1'){
            s+=przeskok(i);
        }
    }
    return s;
}

int main(){
    cin >> n >> m;
    for(int i = 0;i<n;i++){
        cin >> tab[i];
    }
    cout << przeskok(0);
    return 0;
}