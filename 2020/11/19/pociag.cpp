#include <iostream>

using namespace std;

int wagony[1000000];
int wyspa[1000000];

int main() {
    int n;
    int ileW;
    int m = 0;
    int s = 0;
    cin >> n;

    ileW = n;

    for (int i = 0;i<n;i++){
        cin >> wagony[i];
    }
    for (int i = 0;i<n;i++){
        cin >> wyspa[i];
    }
    while(ileW > 0){
        if(m == 1){
            s++;
        }
        if(wagony[ileW-1]==wyspa[m]){
            ileW--;
        }
        
        m = (m+1)%n;
    }
    cout << s << endl;
    return 0;
}