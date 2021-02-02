#include <iostream>
#include <algorithm>

using namespace std;

pair <int, int> stosy[10001];

int tab[10001];


int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> stosy[i].first;
        cin >> stosy[i].second;
    }
    sort(stosy, stosy+n);
    int s = 0;
    int wyn = 0;
    for(int i = 0;i<n;i++){
        /*
        W tablicy tab[k] mamy zapisane
        ile najwiecej cukierkow mozemy dostac
        jesli w poprzedniej konfiguracji bylo k kamieni
        na drugim stosie

        Wiec przejdzmy sie po wszystkich mozliwych ilosciach
        kamieni od 0 do stosy[i].second, bo z tych konfiguracji
        mozemy przejsc do aktualnej
        */
       for(int j = 0;j<=stosy[i].first; j++){
           s = max(s, tab[j]);
       }
       tab[stosy[i].second]=s+1;
       wyn = max(wyn, s+1);
       s=0;
    }

    cout << wyn;
    return 0;
}