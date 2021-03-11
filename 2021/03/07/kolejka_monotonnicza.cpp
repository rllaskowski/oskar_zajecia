#include <iostream>

using namespace std;

int p, k;

pair <int, int> tab[1000001];

int najwieksza(){
    return tab[p].first;
}

void zdejmij(){
    if(tab[p].second>0){
        tab[p].second--;
    }else{
        p++;
    }
}

void wloz(int h){
    int oczek = 0;
    while(p < k && tab[k-1].first<=h){
        oczek++;
        oczek += tab[k-1].second;
        k--;
    } 
    tab[k] = make_pair(h, oczek);
    k++;
}

int main() {
    int n, k, a, ostatnia;
    cin >> n >> k;
    cin >> a;
    wloz(a);
    for(int i = 1;i<n;i++){
        cin >> a;
        ostatnia =najwieksza()+a;
        wloz(ostatnia);
        if(i>=k){
            zdejmij();
        }
    }
    cout << ostatnia;
    return 0;
}