#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

pair <int, int> kamienie[1001];

bool odw[1001];

int n, m, s;


int odl(pair <int, int> x, pair <int, int> y){
    int rx = x.first - y.first;
    int ry = x.second - y.second;
    int odl = rx*rx + ry*ry;

    return odl;
}

bool czyDoskoczyc(pair <int, int> x, pair <int, int> y){
    return odl(x, y) <= s*s;
}

void dfs(int v) {
    // zaznaczuc ze juz bylismy na kamieniu v
    odw[v] = true;
    // przejsc sie po wszystkich kamieniach na ktore mozemy skoczyc
    // i skoczyc na te na ktorych jeszcze nie bylismy
    for(int i = 1;i<=n;i++){
        if (czyDoskoczyc(kamienie[i], kamienie[v]) && !odw[i]){
            dfs(i);
        }
    }
    
}

double zam(double a){
    int b = a*1000;
    double c = b/1000.0;
    return c;
}

void wypiszLadnie(double x) {
    x = zam(x);

    int zero = x * 1000;

    if(zero % 1000 == 0){
        cout << x << ".000";
    }else if(zero % 100 == 0){
        cout << x << "00";
    }else if(zero % 10 == 0){
        cout << x << "0";
    }else{
        cout << x;
    }
}

int main() {
    int w = 0;
    cin >> n >> m >> s;
    for(int i = 1;i<=n;i++){
        cin >> kamienie[i].first >> kamienie[i].second;
    }
    dfs(m);
    for(int i = 1;i<=n;i++){
        if(odw[i]){
            w = max(w, odl(kamienie[i], kamienie[m]));
        }
    }
    
    printf("%.3f", sqrt(w)+s);

    return 0;
}