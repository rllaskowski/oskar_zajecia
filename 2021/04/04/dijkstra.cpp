#include <iostream>
#include <vector>
#include <queue>
using namespace std;


vector<pair<int, int>> kraw[1000000];
long long int odl[1000000]; 
int n, m; // 
const long long INF = 1000000000000000000LL;
 

void dijkstra(int a){
    for(int i = 1;i<=n;i++){
        odl[i] = INF;
    }
    odl[a] = 0;
    priority_queue<pair<int, int>> kolejka;
    kolejka.push(make_pair(0, a));
    
    while(!kolejka.empty()){
        pair<int, int> h = kolejka.top();
        kolejka.pop();
        if(-h.first > odl[h.first]){
            // potworzony element na kolejce
            continue;
        }
        
        for(pair<int, int> x : kraw[h.second]) {
            // x.first - nr wierzcholka
            // x.second - waga krawedzi
            if(odl[x.first] > x.second+odl[h.second]){
                odl[x.first] = x.second+odl[h.second];
                kolejka.push(make_pair(-odl[x.first], x.first));
            }
        }
    }
}

/*
1: <2, 1> , <3, 8>, <5, 2>, <7, 4>
2: <1,1>, <3,8>, ...
3: <2, 8>,
...
*/
int main() {
    int a, b, c;
    cin >> n >> m;
    for(int i = 0;i<m;i++){
        cin >> a >> b >> c;
        kraw[a].push_back(make_pair(b, c));
        kraw[b].push_back(make_pair(a, c));
    }
    



    return 0;
}