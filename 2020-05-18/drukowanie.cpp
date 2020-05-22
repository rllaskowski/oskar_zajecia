#include <iostream>
#include <algorithm>

using namespace std;

pair<int, bool> tab[200000];

int main() {
    int n;
    int p = 0;
    int k = 0;
    int s = 0;
    int c = 0;
    int a, b;
    int w = 0;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> a;
        cin >> b;

        tab[i].first = a;
        tab[i].second = false;
        
        tab[i+n].first = b;
        tab[i+n].second = true;
    }
    sort(tab, tab+2*n);
    p = tab[0].first;
    c = 1;
    for(int i = 1;i<2*n;i++){
        if (tab[i].second == false){
            c+=1;
        }else{
            c-=1;
        }
        if (c == 0){
            w += tab[i].first - p + 1;
            if(i+1 < 2*n){
                p = tab[i+1].first;
            }
        }
    }
    cout << w << endl;
}