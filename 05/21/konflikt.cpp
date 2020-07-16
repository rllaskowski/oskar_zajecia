#include<iostream>
#include<algorithm>

using namespace std;

pair<int, bool> tab[200000];

int main(){
    int n;
    int a;
    int b;
    int c = 0;
    long long int w = 0;
    cin >> n;
    for(int i = 0;i<2*n;i += 2){
        cin >> tab[i].first;
        cin >> tab[i+1].first;

        tab[i].second = false;
        tab[i+1].second = true;
    }
    sort(tab, tab + 2*n);

    for(int i = 0;i < 2*n;i++){
        if(tab[i].second == false){
            w+=c;
            c++;
        }else{
            c--;
        }
    }
    cout << w << endl;
}