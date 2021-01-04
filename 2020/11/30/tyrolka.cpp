#include <iostream>

using namespace std;

pair <int, int> tab[1000];
int najA;
int najB;

bool czyLepszaPara(int a, int b) {
    /*
    Zwraca true jesli para drzewek a b
    jest lepsza niz dotychczasowa najlepsza para
    */
   int rNajX = abs(tab[najA].first-tab[najB].first);
   int rNajY = abs(tab[najA].second-tab[najB].second);
   int rX = abs(tab[a].first-tab[b].first);
   int rY = abs(tab[a].second-tab[b].second);
   
    /*
    rNajY/rNajx > rY/rX;
    */

   if (rNajY == 0) {
       return true;
   }

   if(rNajY*rX>rNajX*rY && rY!=0) {
       return true;
   }else{
       return false;
   }
    
}

int main() {
    int n;
    
    najA = 1;
    najB = 2;
    
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> tab[i].first;
        cin >> tab[i].second;
    }


    for(int i = 1;i<=n;i++){
        for(int j = i+1;j<=n;j++){
            if(czyLepszaPara(i, j)){
                najA = i;
                najB = j;
            }
        }
    }
    cout << najA << " " << najB;
    return 0;
}