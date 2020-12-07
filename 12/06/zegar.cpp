#include <iostream>

using namespace std;

void zam (int a){
    if(a < 10){
        cout << "0" << a;
    }else{
        cout << a;
    }
}

int main(){
    int godziny;
    int minuty;
    int sekundy;
    cin >> godziny >> minuty >> sekundy;
    sekundy++;
    
    if(sekundy == 60){
        sekundy = 0;
        minuty ++;
        if (minuty == 60){
            minuty = 0;
            godziny++;
            if(godziny == 24){
                cout << "00:00:00";
                return 0;
            }
        }
    }
    zam(godziny);
    cout << ":";
    zam(minuty);
    cout << ":";
    zam(sekundy);
    return 0;
}