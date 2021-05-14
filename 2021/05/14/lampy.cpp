#include <iostream>
#include <queue>
#include <iomanip>
#include <vector>

using namespace std;

int obszar[100000];


double zac(double l, int d) {
    // mamy zwrocic zacieniony obszar jezeli
    // polozymy l lamp miedzy dwoma lapmami, które sa w odleglosci d
    return d*d/((l+1)*4);
}

pair<long long, long long> ilePoprawi(long long l, long long d) {
    // l - ile lamp juz jest
    // d to odleglosc miedzy tymi dwoma skrajnymi lampami
    return make_pair(d*d, 4*((l+1) * (l+2)));
}

int ileLamp[100001];

struct comp {
    bool operator()(int a, int b) {
        // zwraca true jesli obszar a ma byc wczesniej na kolejce
        // lub b w przeciwnym przypadku
        pair <long long, long long> a1 = ilePoprawi(ileLamp[a], obszar[a]);
        pair <long long, long long> b1 = ilePoprawi(ileLamp[b], obszar[b]);
        return a1.first * b1.second > b1.first * a1.second;
    }
};


priority_queue<int, vector<int>, comp> kol;


int main() {
    int n, k, d;
    cin >> n >> k >> d;
    int ost = 0;
    int h;
    cin >> ost;
    for(int i = 0;i<n-1;i++){
        cin >> h;
        obszar[i] = h-ost;
        ost = h;
        kol.push(i);
    }
    for(int i = 0;i<k;i++){
        int el = kol.top();
        kol.pop();
        ileLamp[el]++;
        kol.push(el);
    }
    double s = 0;

    for(int i = 0;i<n-1;i++){
        cout << i << ": " << ileLamp[i] << " " << zac(ileLamp[i], obszar[i]) << endl;
        s+=zac(ileLamp[i], obszar[i]);
    }
    
    cout << fixed << setprecision(9) << s << endl;
    return 0;
}