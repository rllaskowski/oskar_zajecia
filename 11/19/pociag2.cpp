#include <iostream>

using namespace std;

int wagony[1000000];
int gdzieP[1000000];

int main() {
    int n;
    int ileW;
    int m = 0;
    int s = 1;
    int p;
    int mia = 0;
    cin >> n;

    ileW = n;

    for (int i = 0;i<n;i++){
        cin >> wagony[i];
    }
    for (int i = 0;i<n;i++){
        // tu wczytuje jaki jest produkt w miescie o numerze i
        // dla wczytanego prouktuchce zapisac, ze jest on w miescie i
       cin >> p;
       gdzieP[p] = i;
    }
    for(int i = n-1;i>=0;i--){
        // wiem ze teraz sciagniemy p = wagony[i]
        // sciagniemy go wiec w miescie gdzieP[p]
        if(gdzieP[wagony[i]] < mia && gdzieP[wagony[i]]>0) {
            s++;   
        }
        mia = gdzieP[wagony[i]];
    }
    cout << s << endl;
    return 0;
}