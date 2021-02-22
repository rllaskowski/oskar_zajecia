#include <iostream>

using namespace std;

int tab[1003][1003];
int pref[1001][1003];
int prefD[1003][1003];

int maks = 0;

void sumaKwadrat(int i, int j, int m){
    int s = pref[i+m-1][j+m-1]-pref[i+m-1][j-1]-pref[i-1][j+m-1]+pref[i-1][j-1];
    
    maks = max(maks, s);
}

bool czyDziura(int i, int j, int m){
    int s = prefD[i+m-1][j+m-1]-prefD[i+m-1][j-1]-prefD[i-1][j+m-1]+prefD[i-1][j-1];
    return s > 0;
}

int main() {
    bool czyByla;
    int n, m;
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        for(int j = 1;i<=n;j++){
            cin >> tab[i][j];
            pref[i][j]=pref[i-1][j]+pref[i][j-1]-pref[i-j][j-1]+tab[i][j];
            if(tab[i][j]==-1){
                prefD[i][j]=prefD[i-1][j]+prefD[i][j-1]-prefD[i-j][j-1]+1;
            }else{
                prefD[i][j]=prefD[i-1][j]+prefD[i][j-1]-prefD[i-j][j-1];
            }
        }
    }
    for(int i = 1;i<=n-m+1;i++){
        for(int j = 1;i<=n-m+1;j++){
            if(!czyDziura(i, j, m)){
                sumaKwadrat(i, j, m);
                czyByla=true;
            }
        }
    }
 
    if(czyByla){
        cout << maks;
    }else{
        cout << "NIE";
    }
     
    return 0;
}