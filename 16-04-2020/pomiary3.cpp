#include<iostream>
#include<map>
using namespace std;

map<int, bool> mapa;


int main() {
    int a;

    int s = 0;

    while(true) {
        cin >> a;
        if(a == -1){
            break;
        }
        if(a > 0){
             if (mapa[a] == false){
               mapa[a] = true;
               s++; 
            }
        }
    }

    cout << s << endl;
    return 0;
}
