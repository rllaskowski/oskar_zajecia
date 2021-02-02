#include <iostream>


using namespace std;

int ileDzielnikow(int n) {
    int s = 0;
    for(int d = 1;d*d<=n;d++){
        if(n % d == 0){
            if(n / d == d){
                s++;
            }else{
                s+=2;
            }
        }
    }
    return s+1;
}

bool czyPierwsza(int n) {
    return ileDzielnikow(n) == 2;
}


int main() {
    int z;
    int a;
    cin >> z;
    for(int i = 0;i<z;i++){
        cin >> a;
        cout << ileDzielnikow(a) << endl;
    }
    return 0;
}