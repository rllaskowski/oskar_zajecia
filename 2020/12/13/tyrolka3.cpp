#include <iostream>
#include <vector>

using namespace std;

pair<int, int> naLewo[200001]; //.first -  wysokosc .second-  nr drzewka
pair<int, int>  naPrawo[200001];

pair <int, int> tab[200001];
int najA;
int najB;

bool czyLepszaPara(int a, int b) {
    /*
    Zwraca true jesli para drzewek a b
    jest lepsza niz dotychczasowa najlepsza para
    */
   long long int rNajX = abs(tab[najA].first-tab[najB].first);
   long long int rNajY = abs(tab[najA].second-tab[najB].second);
   long long int rX = abs(tab[a].first-tab[b].first);
   long long int rY = abs(tab[a].second-tab[b].second);

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
    int j = 0; // wysokosc na ktorej byly ostatnie drzewa
    // - na poczatku nie bylo takiej 
    for(int i = 1; i<200001;i++){
        /*
        Mozemy sprawdzic czy jest drzewo na wysokosci i
        sprawdzajac czy jest jakies najbardziej wysuniete na lewo
        drzewo na wysokosci i
        */
        if(naLewo[i].second>0) {
            if(j!=0){ // oraz byly drzewa wczesniej

                if(czyLepszaPara(naLewo[i].second, naPrawo[j].second)){
                    najA = naLewo[i].second;
                    najB = naPrawo[j].second;
                }
                if(czyLepszaPara(naLewo[j].second, naPrawo[i].second)){
                    najA = naLewo[j].second;
                    najB = naPrawo[i].second;
                }
            }
            j=i;
        }
       
    }
    cout << najA << " " << najB;
    return 0;
}n