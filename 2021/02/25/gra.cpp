#include <iostream>

using namespace std;

bool czyWygrywa[1000000];

int main() {
    int n, k, l;
    cin >> n >> k >> l;
    czyWygrywa[0]=false;
    for(int i = 1;i<=n;i++){
        if(!czyWygrywa[i-1]){
            czyWygrywa[i]=true;
        }else if(i - k >= 0 && !czyWygrywa[i-k]){
            czyWygrywa[i]=true;
        }else if(i - l >= 0 && !czyWygrywa[i-l]){
            czyWygrywa[i]=true;
        }else{
            czyWygrywa[i]=false;
        }
    }
    if(czyWygrywa[n]){
        cout << 'A';
    }else{
        cout << 'B';
    }

    return 0;
}