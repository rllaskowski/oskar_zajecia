#include <iostream>

using namespace std;

int n;
int odw[1000009];

int skok(int h){
    if(h == 0){
        return 1;
    }
    long long int s = 0;
    if(odw[h]==0){
        for(int i = h-1;i>=h-3 && i>=0;i--){
            s+=skok(i);
        }
        odw[h]=s%1000000033;
    }
    return odw[h];
}

int main(){
    cin >> n;
    int h = skok(n);
    cout << h;
    return 0;
}