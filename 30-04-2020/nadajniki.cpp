#include <iostream>

using namespace std;

int tab[100000];


/*
1 3 5 7 6 4 2 8


1 4 3 4 
*/
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> tab[i];
    }
    for(int i = 0;i<n;i++){
        int naj = 0;
        int s = 0;
        for(int j = i-1;j >= 0;j--){
            if(tab[j] > naj || tab[i] > naj){
                s++;
            }
            if(tab[j] > naj){
                naj = tab[j];
            }
        }
        naj = 0;
        for(int m = i+1;m < n;m++){
            if(tab[m] > naj || tab[i] > naj){
                s++;
            }
            if(tab[m] > naj){
                naj = tab[m];
            }
        }

        cout << s << " ";
    }
    return 0;
}