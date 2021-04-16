#include <iostream>
#include <vector>
using namespace std;

vector<int> kraw[100000];
bool odw[100000];
int pre[100000];
int post[100000];
int p[100000];

int f = 1;

void dfs(int h, int skad){
    if(odw[h]){
        return;
    }
    p[h] = skad; 
    pre[h] = f;
    odw[h]=true;
    f++;
    for(int x : kraw[h]){
        dfs(x, h);
    }
    post[h]=f;
    f++;
}

// Czy a jest przodkiem b
bool czyPrzodek(int a, int b){
    return (pre[a] <= pre[b] && post[a] >= post[b]);
}

// prosty algorytm znajdowania najnizszego wspolnego przodka,
// poprzez chodzenie w gore drzewa az nie znajdziemy wyniku
int prosteLCA(int a, int b) {
    while(!czyPrzodek(a, b)){
        //cout << a << endl;
        a=p[a];
    }
    return a;
}

/*
13
1 2
2 11 
11 12 
12 13
11 10
2 3
1 5
5 4
4 8
4 9
5 6
6 7


2
8 7
11 6
*/

int main() {
    int n, a, b;

    cin >> n; 

    for (int i = 0; i < n-1; i++) {
        cin >> a >> b;
        kraw[a].push_back(b);
        kraw[b].push_back(a);
    }
    dfs(1, 1);
    for(int i = 1;i<=n;i++){
        cout << i << ": ";
        cout << pre[i] << " " << post[i] << " " << p[i]<< endl;
    }

    string odp = 1 < 2? "TAK" : "NIE";


    int z;
    cin >> z;

    for (int i = 0; i < z; i++) {
        cin >> a >> b;
        //cout << (czyPrzodek(a, b)? "TAK" : "NIE") << endl;
        cout << prosteLCA(a, b) << endl;
    }
    return 0;
}