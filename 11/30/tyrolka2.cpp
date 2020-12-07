#include <iostream>
#include <vector>

using namespace std;

pair<int, int> naLewo[1001]; //.first -  wysokosc .second-  nr drzewka
pair<int, int>  naPrawo[1001];

pair <int, int> tab[200001];
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
        
        if(naLewo[tab[i].second].second == 0 || tab[i].first < naLewo[tab[i].second].first){
            naLewo[tab[i].second].first = tab[i].first;
            naLewo[tab[i].second].second = i;
        }
        if(naPrawo[tab[i].second].second == 0 || tab[i].first > naPrawo[tab[i].second].first){
            naPrawo[tab[i].second].first = tab[i].first;
            naPrawo[tab[i].second].second = i;
        }

    }
    for(int i = 1; i<1001;i++){
        /*
        Mozemy sprawdzic czy jest drzewo na wysokosci i
        sprawdzajac czy jest jakies najbardziej wysuniete na lewo
        drzewo na wysokosci i
        */
        if(naLewo[i].second>0) {
            for(int j = i+1; j<1001;j++){
                /*
                Sprawdzmy najpierw czy istnieje jakiekolwiek drzewo
                na wysokosci j
                */
                if(naLewo[j].second>0){

                    if(czyLepszaPara(naLewo[i].second, naPrawo[j].second)){
                        najA = naLewo[i].second;
                        najB = naPrawo[j].second;
                    }
                    if(czyLepszaPara(naLewo[j].second, naPrawo[i].second)){
                        najA = naLewo[j].second;
                        najB = naPrawo[i].second;
                    }
                }
                
            }
        }
       
    }
    cout << najA << " " << najB;
    return 0;
}
