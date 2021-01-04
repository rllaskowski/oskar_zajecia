#include <iostream>
#include <algorithm>

using namespace std;

bool czyAnagram(string a, string b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    return a == b;
}

string tab[1000000];

/*
aab
abb
abc
abc
abc
abc

(n-1)*n/2

3*4/2=6
*/

int main() {
    int n, k;
    long long int w = 0;
    long long ile = 1;
    cin >> n >> k;
    for(int i =0;i<n;i++){
        cin >> tab[i];
        sort(tab[i].begin(), tab[i].end());
        
    }
    sort(tab, tab+n);
    for(int i = 1;i<n;i++){
        if(tab[i]!=tab[i-1]){
            w+=(ile-1)*ile/2;
            ile = 1;
        }else{
            ile++;
        }
    }

    w+=(ile-1)*ile/2;
    cout << w;
    return 0;
}