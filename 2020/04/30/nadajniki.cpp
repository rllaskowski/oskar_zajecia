#include <iostream>

using namespace std;

int tab[100000];


        /*     9
           9       8 
         9   4   8   2   
        9 0 4 0 7 8 9 2      
    
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