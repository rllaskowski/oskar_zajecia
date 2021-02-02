#include <iostream>

using namespace std;

int tab[100001];

int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> tab[i];
    }
    int maks = 0;
    for(int i = 0;i<n;i++){
        int j = tab[i];
        int s = 1;
        for(int k = i+1;k<n+i;k++){
            if(tab[k%n]=j+1){
                s++;
            }
            j++;
        }
        if(s > maks){
            maks = s;
        }
    }
    cout << maks;
    return 0;
}