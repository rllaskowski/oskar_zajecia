#include <iostream>

using namespace std;

struct bakteria {
    int glowny;
    int masa;
    int min_iq;
    int max_iq;
};

struct bakteria tab[1000001];

int find(int x){
    if(tab[x].glowny == x){
        return x;
    }
    tab[x].glowny = find(tab[x].glowny);
    return 
}

int main() {
    int n, m;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> tab[i].masa;
        cin >> tab[i].min_iq;
        tab[i].max_iq = tab[i].min_iq;
        tab[i].glowny = i;
    }

    return 0;
}