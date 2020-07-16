#include <iostream>
using namespace std;

int prod[1000001];


int main() {
    int p;
    int k;
    int s = 0;
    int wynik = 0;
    cin >> p >> k;
    for (int i = 1; i <= p; i++) {
        cin >> prod[i];
    }


    for(int i = 1 ;i<= p; i++) {
        s = 0;
        for (int j = i; j <= p; j++) {
            s += prod[j];   

           if (s % k == 0) {
               wynik++;
           }
        }   
    }

    cout << wynik << endl;

}