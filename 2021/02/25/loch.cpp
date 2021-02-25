#include <iostream>
#include <queue>

using namespace std;

char tab[1001][1001];
bool odw[1001][1001];
int odl[1001][1001];

int n, m;

bool czyDobra(pair <int, int> a){
    if(a.first >= n || a.second >= m || a.first < 0 || a.second < 0){
        return false;
    }
    return tab[a.first][a.second] != '#';
}

void bfs(pair <int, int> a){
    odl[a.first][a.second]=0;
    odw[a.first][a.second]=true;
    queue <pair<int, int>> kolejka;
    kolejka.push(a);
    while(!kolejka.empty()){
        pair <int, int> b = kolejka.front();
        kolejka.pop();
        
        pair<int, int> kraw[4] = {
            make_pair(b.first+1, b.second),
            make_pair(b.first, b.second+1),
            make_pair(b.first-1, b.second),
            make_pair(b.first, b.second-1),
        };

        for (int i = 0; i < 4; i++) {
            pair<int, int> c = kraw[i];
            if(czyDobra(c) && !odw[c.first][c.second]){
                kolejka.push(c);
                odl[c.first][c.second]=odl[b.first][b.second]+1;
                odw[c.first][c.second]=true;
            }
        }
    }
}

int main() {
    pair <int, int> p, k;
    cin >> n >> m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> tab[i][j];
            if(tab[i][j] == '@'){
                p = make_pair(i, j);
            }else if(tab[i][j] == '>'){
                k = make_pair(i, j);
            }
        }
    }

    return 0;
}