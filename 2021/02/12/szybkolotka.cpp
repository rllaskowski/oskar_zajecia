#include <iostream>

using namespace std;

pair<int, int> tab[109];

int odl(pair<int, int> a, pair<int, int> b){
    int rx = a.first - b.first;
    int ry = a.second - b.second;
    return rx * rx + ry * ry;
}
bool czyMoznaGrac(pair<int, int> a, pair<int, int> b, pair<int, int> c){
    if(odl(a, b) == odl(c, a)){
        return true;
    }
    if(odl(a, b) == odl(b, c)){
        return true;
    }
    if(odl(c, a) == odl(c, b)){
        return true;
    }
    return false;
}

int main() {
    int n;
    int s = 0;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> tab[i].first;
        cin >> tab[i].second;
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int h = j+1;h<n;h++){
                if(czyMoznaGrac(tab[i], tab[j], tab[h])){
                    s++;
                }
            }
        }
    }
    cout << s;
    return 0;
}