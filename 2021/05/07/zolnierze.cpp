#include <iostream>

using namespace std;

int n;

int tab[5000005];

bool kwadrat(int bok){
    int h = 0; // nr domu
    for(int i = 0;i<bok && h < n;i++){
        int pozostale = bok;
        while(h<n && tab[h] <= pozostale){
            h++;
            pozostale-=tab[h-1];
        }
    }
    if(h == n){
        return true;
    }
    return false;
}

int main(){
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> tab[i];
    }
    int p = 1;
    int w;
    int k = 1000000000;
    while (p <= k){
        int s = (p + k) / 2;
        if(kwadrat(s)){
            w = s;
            k = s-1;
        }else{
            p = s+1;
        }
    }
    cout << w;
    return 0;
}