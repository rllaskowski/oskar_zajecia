#include<iostream>

using namespace std;

int tab[100000];

int main(){
    int a;

    int s = 0;
    while(true) {
        cin >> a;
        if(a == -1){
            break;
        }
        if(a > 0){
            bool znaleziona = false;

            for(int j = 0;j < s;j++){
                if (tab[j] == a) {
                    znaleziona = true;
                    break;
                }
            }

            if (znaleziona == false) {
                tab[s] = a;
                s++;
            }

        }
    }
    cout << s << endl;
    return 0;
}