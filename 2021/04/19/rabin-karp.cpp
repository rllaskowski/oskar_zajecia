#include <iostream>

using namespace std;

const int mod = 1000000009;


long long hashSuf[1000000];
long long pot[1000000]; 
long long wyliczHash(string t) {
    long long hash = 0; 
    long long h = 0;
    for(int i = t.size()-1;i>=0;i--){
        // i jest dlugoscia sufkisu
        // teraz do hasha dojdzie litera na indeksie?
        hash = (hash+(t[i] - 'a')*pot[h]) % mod;
        h++;
    }
    return hash;
} 


void hasheSufiksow(string t) {
    hashSuf[t.size()] = 0;
    int h = 0;
    for(int i = t.size()-1;i>=0;i--){
        hashSuf[i] = (t[i]*pot[h] + hashSuf[i+1])%mod;
    }
}

long long zamienLadnie(long long w) {
    return ((w % mod) + mod) % mod;
}

int main() {
    string tekst, w;
    cin >> tekst >> w; 
   
    int n;
    pot[0] = 1;
    for(int i = 1;i<1000000;i++){
        pot[i] = (pot[i-1] * 27) % mod;
    }
    hasheSufiksow(tekst);
    long long wHash = wyliczHash(w);

    
    for(int i = 0;i<tekst.size() - w.size();i++){
        long long l = zamienLadnie(hashSuf[i] - hashSuf[w.size() + i]);
        long long r = zamienLadnie(wHash * pot[tekst.size() - (w.size()+i)]);
        if(l == r){
            cout << i << " " << i+w.size() << endl;
        }
    }
    ///cout << wyliczHash("asagjahvssadfdsfdsfdhkasd") << endl;

    return 0;
}