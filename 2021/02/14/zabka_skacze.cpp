
#include <iostream>

using namespace std;

int n;

int skok(int h){
    int s = 0;
    if(h > n){
        return 0;
    }
    if(h == n){
        return 1;
    }
    for(int i = h+1;i<=h+3;i++){
        s += skok(i);
    }
    return s;
}

int main(){
    cin >> n;

    cout << skok(0);
    return 0;
}