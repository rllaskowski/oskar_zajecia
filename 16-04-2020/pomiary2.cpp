#include<iostream>

using namespace std;

bool tab[1000000];

int main(){
    int a;

    int s = 0;
    while(true) {
        cin >> a;
        if(a == -1){
            break;
        }
        if(a > 0){
            if (tab[a] == false){
               tab[a] = true;
               s++; 
            }
        }
    }
    cout << s << endl;
    return 0;
}
