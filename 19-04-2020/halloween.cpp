#include <iostream>
using namespace std;

int tab[100001];

/*

3 4 2 6 1
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
    }
    for(int i = 0;i<t;i++);{
        cin >> p;
        cin >> k;
        s = 0;
        while(p <= k){
            s += tab[p];
            p++;
        }
        cout << s << endl;
    }
    
    return 0;
}