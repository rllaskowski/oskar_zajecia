#include <iostream>

using namespace std;

int tab[100000];
int l[100000];
int p[100000];


/*                    0 1 2 3 4 5
tablica akrobatów:    2 4 3 4 2 5
największy po lewej:  0 2 4 4 4 4
największy po prawej: 5 5 5 5 5 0

*/
int main() {
    int n;
    int m;
    int t;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> tab[i];
        if(i == 0){
            l[i] = 0;
        }else{
            if(tab[i-1] > l[i-1]){
                l[i] = tab[i-1];
            }else{
                l[i] = l[i-1];
            }
        }
    }

    for(int i = n-2;i >= 0;i--){
        if(tab[i+1] > p[i+1]){
                p[i] = tab[i+1];
            }else{
                p[i] = p[i+1];
            }
    }

    cin >> m;
    for(int i = 0;i<m;i++){
        cin >> t;
        cout << tab[t-1] + l[t-1] + p[t-1] << endl;  
    }
    return 0;
}


