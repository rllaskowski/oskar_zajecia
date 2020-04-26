#include <iostream>
using namespace std;
int tab[10000];

/*
4 2

1 4 5 7 

*/

int main(){
    int n;
    int m;
    int s = 0;
    int max = 0;
    cin >> n;
    cin >> m;
    for (int i = 0;i<n; i++){
        cin >> tab[i];
    }

    
    for(int i = 0;i<n-1;i++){
        if (tab[i] + m >= tab[i + 1]){
            s++;
        }else{
            if (s > max){
                max = s;
            }
            s = 0;
        }
    }
    if (s > max) {
        max = s;
    }

    cout << max+1 << endl;
    return 0;
}