#include <iostream>
using namespace std;

int tab[1000000];

int main() {
    int n;
    int m;
    int s = 0;
    cin >> n;

    cin >> m;
    for(int i = 0;i < n;i++){
        cin >> tab[i];
    }

    for (int i = 0;i < n;i++){
        bool ladny = false;

        for(int j = i;j < n;j++){
            if(tab[j] >= m){
                ladny = true;
            }

            if (ladny == true) {
                 s++;
            }
        }
    }
    cout << s << endl;
    
    return 0;
}