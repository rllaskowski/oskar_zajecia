#include <iostream>
using namespace std;


/*

0010 0000




1000 0100 0001 0111 
0    1    3    1
3    2    0    0
3    2    3    1
*/


bool ciag[200000];

int zera(int n){
    int max = 0;
    int wynik = 0;
    for(int i = 1;i <= n;i++){
        if (ciag[i] == false){
            wynik++;
        }else{
            if (wynik > max){
                max = wynik;
            }
            wynik = 0;
        }
    }
    if(wynik > max){
        max = wynik;
    }
    return max;
}

int main() {
    int n;
    int m;
    cin >> n;
    cin >> m;
    for(int i = 1;i<=n;i++){
        char c;
        cin >> c;

        if (c == '1') {
            ciag[i] = true;
        }   
    }
    int a;
    for(int i = 0;i<m;i++){
        cin >> a;
        if(ciag[a] == false){
            ciag[a] = true;
        }else{
            ciag[a] = false;
        }

        cout << zera(n) << endl;
    }


    return 0;
}

