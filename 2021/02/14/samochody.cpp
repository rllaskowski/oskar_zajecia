#include <iostream>
#include <algorithm>

using namespace std;

int cena[100001];

int main() {
    int n, t, a;
    cin >> n >> t;
    for(int i = 0;i<n;i++){
        cin >> cena[i];
    }
    sort(cena, cena+n);
    for(int i = 0;i<t;i++){
        cin >> a;
        int p = 0;
        int k = n-1;
        int s;
        int w = 0;
        while(p<=k){
            s = (p+k)/2;
            if(cena[s] > a){
                k = s-1;
            }else{
                w = cena[s];
                p = s+1;
            }
        }
        if(w > 0){
            cout << w << endl;
        }else{
            cout << "NIE" << endl;
        }
    }
    return 0;
}