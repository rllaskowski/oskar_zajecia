#include <iostream>
#include <map>
using namespace std;

map<long long, bool> czyWCiagu;

int main() {
    long long  x;
    cin >> x;
    cout << x;

    int n;
    long long k;
    long long a;
    int b;
    cin >> n;
    cin >> k;

    a = k;

    for(int i = 0;i < n;i++){
        cin >> b;
        czyWCiagu[b] = true;
    }

    while (czyWCiagu[k] == true){
        k+=a;
    } 

    cout << k;
    return 0;
}