#include <iostream>


using namespace std;

int kubelki[1000001];
int tab[1000000];

int main() {
    int n;
    int a;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> a;
        kubelki[a]++;
    }
    int l = 0;
    for(int i = 0;i<=1000000;i++){
        while(kubelki[i] > 0){
            tab[l] = i;
            l++;
            kubelki[i]--;
        }
    }

    for(int i = 0;i<n;i++){
        cout << tab[i] << " ";
    }
    return 0;
}