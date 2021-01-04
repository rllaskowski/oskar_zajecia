#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    int a;
    int o = 0;
    int s = 0;
    cin >> n;

    cin >> m;
    for(int i = 1;i <= n;i++){
        cin >> a;
        if(a >= m){
            o = i;
        }
        s += o;
    }


    cout << s << endl;
    
    return 0;
}