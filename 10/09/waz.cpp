#include <iostream>

using namespace std;

/*
Reprezentujmy punkty zmiennymi typu
pair<int, int> punkt

gdzie punkt.first to pierwsza wspolrzedna
i punkt.second druga


Tw. Pitagorasa: c^2 = a^2+b^2;


*/

pair<int, int> tab[1002];

bool odw[1001];

int odl(pair<int, int> p1, pair<int, int> p2){
    int bok1 = p1.first - p2.first;
    int bok2 = p1.second - p2.second;
    return (bok1 * bok1 + bok2 * bok2);
} 


int n, s, w;

void skaczNa(int k) {
    odw[k] = true;
    w++;

    for (int i = 1; i <= n; i++) {
        // i to numer pewnej kapusty
        // sprawdzam czy moge i oplaca mi sie na nia skakac
        if(odw[i]==false && odl(tab[k], tab[i])<=s*s) {
            skaczNa(i);
           
        }
    }      
}

int main() {
    cin >> n >> s;

    for(int i = 1;i<=n;i++){
        cin >> tab[i].first;
        cin >> tab[i].second;
    }
    skaczNa(1);
    cout << w << endl;
    return 0;
}