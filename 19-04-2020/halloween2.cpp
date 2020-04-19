#include <iostream>
using namespace std;

int tab[100001];

/*
3 4 2 6  1
3 7 9 15 16
*/

int main() { 
    int t;
    int n;
    int p;
    int k;
    int s;
    cin >> t;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> tab[i];
        tab[i] += tab[i-1];
    }
    for(int i = 0;i<t;i++);{
        cin >> p;
        cin >> k;
        
        cout << tab[k] - tab[p - 1] << endl;
    }
    
    return 0;
}