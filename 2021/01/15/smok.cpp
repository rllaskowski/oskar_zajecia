#include <iostream>

using namespace std;

int koszt[1001][1001];
int wyniki[1001][1001];
int lewa[1001][1001];
int prawa[1001][1001];
/*
5 1
5 7 6 2 3
9 1 4 0 7
7 8 3 6 2
2 5 3 1 4
4 4 8 9 7
2 2

3 3
6 2 3
7 8 2
4 9 7
1 2
0 1
1 1

*/

int main() {
    int n, t;
    cin >> n >> t;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin >> koszt[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i == 0){
                wyniki[i][j] = koszt[i][j];
            }else{
                if(j>0){
                    lewa[i][j]=lewa[i-1][j-1] + koszt[i-1][j-1];
                }
                if(j<n-1){
                    prawa[i][j]=prawa[i-1][j+1] + koszt[i-1][j+1];
                }
                wyniki[i][j]+=lewa[i][j];
                wyniki[i][j]+=prawa[i][j];
                wyniki[i][j]+=wyniki[i-1][j];
                wyniki[i][j]+=koszt[i][j];
            }
        }
    }
    int x;
    int y;
    for(int i = 0;i<t;i++){
        int s = 0;
        cin >> x;
        cin >> y;
        cout << wyniki[y][x] << endl;
    }

    return 0;
}