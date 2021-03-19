#include <iostream>


using namespace std;

// p[i].first - do kogo prowadzi krawedz
// p[i].second - roznica na tej krawdzi

pair <int, int> p[1000000];

/* Zwraca pare <numer wierzcholka na koncu, roznica od wierzcholka> */
pair <int, int> find(int x){
    if(p[x].first == 0){
        return make_pair(x, 0);
    }
    pair<int, int> res = find(p[x].first);
    p[x] = make_pair(res.first, p[x].second+res.second);
    return p[x];
}

int main() {
    

    return 0;
}