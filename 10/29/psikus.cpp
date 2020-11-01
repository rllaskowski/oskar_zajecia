#include <iostream>

using namespace std;

int cukierki[1000000];

int main() {
    int n;
    int s;
    int w = 0;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> cukierki[i];
    }
    for(int i = 0;i<n;i++){
        s = 0;
        for(int j = i;j<n;j++){
            s+= cukierki[j];
            if(s % 2 == 0){
                w++;
            }
        }
    }
    cout << w << endl;
    return 0;
}