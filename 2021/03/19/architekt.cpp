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

void Union(int a, int b, int c){
    pair <int, int> A = find(a);
    pair <int, int> B = find(b);
    
    if(A.first != B.first || (A.first == 0 || B.first == 0)){
        cout << "TAK" << endl;
        p[B.first].first = A.first;
        p[B.first].second = c - B.second + A.second;
    }else{
        if(c == B.second - A.second){
            cout << "TAK" << endl; 
        }else{
            cout << "NIE" << endl;
        }
    }
    return;
}

int main() {
    int n, m, a, b, c;
    cin >> n >> m;
    for(int i = 0;i<m;i++){
        cin >> a >> b >> c;
        Union(a, b, c);
    }
    return 0;
}