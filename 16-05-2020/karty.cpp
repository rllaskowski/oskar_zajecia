#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int s;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> tab[i];
    }
    for(int i = 0;i < n;i++){
        cin >> a;
        if(a == '1'){
            s += tab[i];
        }
    }
    sort(tab, tab + n);
    int l = 0;
    while(s > tab[l]){
        s -= tab[l];
        l++;
    }
    cout >> l+1;
    return 0;
}