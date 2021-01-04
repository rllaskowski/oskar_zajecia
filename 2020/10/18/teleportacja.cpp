#include <iostream>

using namespace std;

int tele(long long int n, long long i){
    cout << n << " " << i << endl;
    if(n == 0){
        return 0;
    }

    n -= i;
    if(n % (i*2) == 0){
        i *= 2;
    }
    
    return 1 + tele(n, i);
}

int main() {
    long long int n;
    cin >> n;
    
    cout << tele(n, 1);
    return 0;
}