#include <iostream>

using namespace std;

int cena[1000001];
int kalorie[1000001];

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    for(int i = 0;i<n;i++){
        cin >> kalorie[i];
    }
    for(int i = 0;i<n;i++){
        cin >> cena[i];
    }

    long long najmniej = 1000000000000000LL;
    long long najwiecej = 0;
    int c = false;
    for(int i = 0;i<n;i++){
        long long kal = 0;
        long long cen = 0;
        for(int j = i;j<n;j++){
            kal+=kalorie[j];
            cen+=cena[j];
            if(kal>=a && kal<=b){
                najwiecej = max(najwiecej, cen);
                najmniej = min(najmniej, cen);
                c = true;
            }
        }
    }
    if(c){
        cout << najmniej << " " << najwiecej;
    }else{
        cout << "NIE";
    }
    return 0;
}
