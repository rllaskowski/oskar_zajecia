#include <iostream>
#include <string>

using namespace std;

long long int ls1[27];
long long int ls2[27];
long long int ls3[27];
int rl1[27];
int rl2[27];
int rl3[27];

int main() {
    string a;
    cin >> a;
    long long int sl1 = 0;
    long long int sl2 = 0;
    long long int sl3 = 0;
    int sr1 = 0;
    int sr2 = 0;
    int sr3 = 0;
    for(int i = 0;i<a.size();i++){
        int znak = a[i]-'a';
        ls1[znak]++;
        sl1++;
        sl2+=sl1 - ls1[znak];
        ls2[znak] += sl1 - ls1[znak];
        ls3[znak] += sl2 - ls2[znak];
        sl3 += sl2 - ls2[znak];
        
        sr1 += 1 - rl1[znak];  
        rl1[znak]=1;
        sr2 += (sr1-rl1[znak])-rl2[znak];
        rl2[znak]=sr1-rl1[znak];
        sr3 += sr2-rl2[znak]-rl3[znak];
        rl3[znak]=sr2-rl2[znak];
    }
    
    cout << sl3 << " " << sr3;
    return 0;
}