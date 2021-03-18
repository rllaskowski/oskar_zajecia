#include <iostream>
#include <vector>

using namespace std;

vector <int> dz(int a){
    vector <int> b;
    for(int i = 1;i*i<=a;i++){
        if(a % i == 0){
            b.push_back(i);
            b.push_back(a/i);
        }
    }
    return b;
}   


bool czyDobra(long long x, long long y, int a, int b){
    if((a >= x && b >= y) || (a >= y && b >= x)){
        return true;
    }
    return false;
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    vector <int> vctA = dz(c);
    vector <int> vctB = dz(d);
    for(long long x : vctA){
        for(long long y : vctB){
            // z tych dzielnikow mamy 3: x, y, x*y

            if (czyDobra(x, c*d / x, a, b)){
                cout << "TAK";
                return 0;
            }
            if(czyDobra(y, c*d / y, a, b)){
                cout << "TAK";
                return 0;
            }
            if(czyDobra(x*y, (c*d) / (x*y), a, b)){
                cout << "TAK";
                return 0;
            }
        }
    }
    cout << "NIE";
    return 0;
}