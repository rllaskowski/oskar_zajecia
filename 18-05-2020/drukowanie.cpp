#include <iostream>
#include <algorithm>

using namespace std;

pair<int, bool> tab[200000];
int main() {
    int n;
    for(int i = 0;i<n;i++){
        cin >> a;
        cin >> b;

        tab[i].first = a;
        tab[i].second = true;
        
        tab[i+n].first = b;
        tab[i+n].second = false;
    }
    sort(tab, tab+2*n);


}
