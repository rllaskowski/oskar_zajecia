#include <iostream>


using namespace std;

int nwd(int n, int m){
    if(n < m){
        swap(n, m);
    }
    if(m == 0){
        return n;
    }
    return nwd(n%m, m);
}

void punkty(pair <int, int> x, pair <int, int> y){
    int rx = abs(x.first - y.first);
    int ry = abs(x.second - y.second);
    int nwdxy = nwd(rx, ry);
    int a = rx / nwdxy;
    int b = ry / nwdxy;
    for(int i = 0;i<nwdxy;i++){
        if(x.first > y.first){
            cout << x.first-a*i << " ";
        }else{
            cout << x.first + a*i << " ";
        }
        if(x.second > y.second){
            cout << x.second-b*i << endl;
        }else{
            cout << x.second + b*i << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int x, y;
    pair <int, int> o;
    pair <int, int> pi;
    for(int i = 0;i<n;i++){
        cin >> x >> y;
        pair <int, int> p = make_pair(x, y);
        if(i > 0){
            punkty(o, p);
        }else{
            pi = p;
        }
        o = p;
    }
    punkty(o, pi);
    return 0;
}