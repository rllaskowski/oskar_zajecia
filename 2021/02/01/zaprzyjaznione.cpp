#include <iostream>

using namespace std;

int ileDzielnikow[1000001];
short int sumyPref[240][1000001];

int main() {
    for(int i = 1;i<=1000000;i++){
        for(int j = i;j<=1000000;j+=i){
            ileDzielnikow[j]++;
        }   
    }

    for (int i = 1; i <= 1000000; i++) {
        for (int d = 1; d <= 240; d++) {
            sumyPref[d][i] = sumyPref[d][i-1];
        }
        int ile = ileDzielnikow[i];
        sumyPref[ile][i]++;
    }
    


    int t, x, y;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        int s = 0;
        int wyn = 0;
        for (int d = 1; d <= 240; d++) {
            s = sumyPref[d][y]-sumyPref[d][x-1];
            wyn += s * (s-1) / 2;
            
        }
        cout << wyn << endl;
        
        
    }



    return 0;
}