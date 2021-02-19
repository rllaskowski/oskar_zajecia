#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map <int, int> tab;

int main(){
    int n;
    int s;
    int a;
    long long int suma = 0;
    cin >> n >> s;
    for(int i = 0;i<n;i++){
        cin >> a;
        tab[a]++;
        suma+=tab[s-a];
    }
    cout << suma;
    return 0;
}