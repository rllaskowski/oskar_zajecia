#include <iostream>

using namespace std;

int tab[1000];

int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> tab[i];
    }
    int pozNajm;
    for(int i = 0;i<n;i++){
        pozNajm = i;
        for(int j = i+1;j<n;j++){
            if(tab[j]<tab[pozNajm]){
                pozNajm = j;
            }
        }
        swap(tab[pozNajm], tab[i]);
    }

    for(int i = 0;i<n;i++){
        cout << tab[i] << " ";
    }
    return 0;
}