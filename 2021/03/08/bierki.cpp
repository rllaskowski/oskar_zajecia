#include <iostream>
#include <algorithm>
using namespace std;
int tab[30000];

int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> tab[i];
    }
    sort(tab, tab+n);
    int p = 0;
    int k = 2;
    int s = 0;
    while(k<n){
        if(k-p == 1){
            k++;
        }else if(tab[p]+tab[p+1] > tab[k]){
            s = max(s, k-p+1);
            k++;
        }else{
            p++;
        }
    }
    cout << s;
    return 0;
}