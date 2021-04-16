#include <iostream>

using namespace std;

/*
ABBABABBABABBB
BABB
*/

int main() {
    // tekst i wzorzec
    string t, w;

    cin >> t >> w;

    for(int i = 0;i<t.size()-w.size()+1;i++){
        int j = 0;
        
        while (j<w.size() && w[j] == t[j+i]) j++;

        if (j == w.size()) {
            cout << i << " " <<  i+w.size()-1 << endl;
        }
    }


    return 0;
}