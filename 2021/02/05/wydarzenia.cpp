#include <iostream>

using namespace std;

int tab[100001];
int nastroj[100001];
// obliczone nr ostatniego wydarzenia
int wyniki[100001];

int main() {
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> tab[i];
    }
    for(int i = 1;i<=n;i++){
        cin >> nastroj[i];
    }
    for(int i = 1;i<=n;i++){
        int j = i;
        while(tab[j]!=0){
            if (wyniki[j] != 0) {
                j = wyniki[j];
            } else {
                j=tab[j];
            }
        }
        cout << nastroj[j];
        int k = i;
        while(wyniki[k]==0 && tab[k]!=0){
            wyniki[k] = j;
            k = tab[k];
        }
    }
    return 0
}