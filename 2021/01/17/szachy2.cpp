#include <iostream>
#include <algorithm>

using namespace std;

int tablica[1001][1001];
int lewyg[1001][1001];
int lewyd[1001][1001];
int prawyg[1001][1001];
int prawyd[1001][1001];
/*
5 6
3 4 2 6 7 6
5 6 4 7 4 3
7 9 4 2 5 2
5 3 8 9 3 2
6 5 7 2 8 1

*/

int main() {
    int n, m;
    int nw = 0;
    int w = 0;
    cin >> n >> m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> tablica[i][j];
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
           lewyg[i][j] = tablica[i][j];
           if (i > 0) {
               lewyg[i][j] = max(lewyg[i][j], lewyg[i-1][j]);
           }
           if (j > 0) {
               lewyg[i][j] = max(lewyg[i][j], lewyg[i][j-1]);
           }
        }
    }

    for(int i = n-1;i>=0;i--){
        for(int j = 0;j<m;j++){
           lewyd[i][j] = tablica[i][j];
           if (i+1 < n) {
               lewyd[i][j] = max(lewyd[i][j], lewyd[i+1][j]);
           }
           if (j > 0) {
               lewyd[i][j] = max(lewyd[i][j], lewyd[i][j-1]);
           }
        }
    }

    for(int i = n-1;i>=0;i--){
        for(int j = m-1;j>=0;j--){
           prawyd[i][j] = tablica[i][j];
           if (i+1 < n) {
               prawyd[i][j] = max(prawyd[i][j], prawyd[i+1][j]);
           }
           if (j+1 < m) {
               prawyd[i][j] = max(prawyd[i][j], prawyd[i][j+1]);
           }
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = m-1;j>=0;j--){
           prawyg[i][j] = tablica[i][j];
           if (i > 0) {
               prawyg[i][j] = max(prawyg[i][j], prawyg[i-1][j]);
           }
           if (j+1 < m) {
               prawyg[i][j] = max(prawyg[i][j], prawyg[i][j+1]);
           }
        }
    }
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            w = 0;
            if(i>0 && j>0){
                w = lewyg[i-1][j-1];
            }
            if(i<n-1 && j>0){
                w = max(lewyd[i+1][j-1], w);
            }
            if(i<n-1 && j<n-1){
                w = max(prawyd[i+1][j+1], w);
            }
            if(i>0 && j<n-1){
                w = max(prawyg[i-1][j+1], w);
            }
            nw = max(w+tablica[i][j], nw);
        }
    }
    cout << nw;
    return 0;
}