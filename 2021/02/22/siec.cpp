#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector <int> tab[500001]; 

int odl[500001];
queue <int> kolejka;

void bfs(int s){
    odl[s]=0;
    kolejka.push(s);
    while(kolejka.size() > 0){
        int i = kolejka.front();
        kolejka.pop();
        for(int x : tab[i]){
            if(odl[x]<0){
                odl[x]=odl[i]+1;
                kolejka.push(x);
            }
        }
    }
}

int main() {
    int n, m;
    for(int i = 0;i<m;i++){
        cin >> a >> b;
        tab[a].push_back(b);
        tab[b].push_back(a);
    }

    return 0;
}