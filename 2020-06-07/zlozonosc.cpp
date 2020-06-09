#include <iostream>
using namespace std;

int nwd(int a, int b) {
    int licznik = 0;

    if(a<b){
        licznik = 1;
        swap(a, b);
    }else{
        licznik += a/b;
        a %= b;  
    }

    if (b != 0){
        licznik += nwd(a, b);
    }
  
    return licznik;
}

int main() {
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout << nwd(a, b);
    return 0;
}

