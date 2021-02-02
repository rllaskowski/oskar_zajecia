#include <iostream>

using namespace std;

int tab[1000];

int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> tab[i];
    }

    for(int i = 1;i<n;i++){
        int j = i;
        while(j>0 && tab[j] < tab[j-1]){
            swap(tab[j],tab[j-1]);
            j--;
        }
    }

    for(int i = 0;i<n;i++){
        cout << tab[i] << " ";
    }

    return 0;
}