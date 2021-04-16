#include <iostream>
#include <vector>
using namespace std;

vector<int> kraw[100000];
bool odw[100000];
int pre[100000];
int post[100000];
int p[100000][21];

int f = 1;

void dfs(int h, int skad){
    if(odw[h]){
        return;
    }
    p[h][0] = skad; 
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


int LCA(int a, int b) {
    if(czyPrzodek(a, b)){
        return a;
    }else if(czyPrzodek(b, a)){
        return b;
    }

    // zaczynamy od skokow dlugosci 2^20
    int pot = 20;

    while (pot > 0) {
        // gdzie skoczylibysmy skaczac o 2^pot w górę z wierzcholka a
        int v = p[a][pot];
        if(!czyPrzodek(v, b)){
            a = v;
        }else{
            pot--;
        }
    }
    return p[a][0];
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


    for(int i = 1;i<=20; i++){
        for(int j = 1;j<=n; j++) {
            // dla wierzcholka o numerze j
            // chcemy obliczyc jaki jest numer wierzcholka
            // ktory jest o 2^j wyzej w drzewie
            // robimy to korzystajac z poprzedniej kolumny w naszej tablicy
            
            p[j][i] = p[p[j][i-1]][i-1];
        }
    }


    /*int z;
    cin >> z;

    for (int i = 0; i < z; i++) {
        cin >> a >> b;
        //cout << (czyPrzodek(a, b)? "TAK" : "NIE") << endl;
        cout << prosteLCA(a, b) << endl;
    }*/
    return 0;
}