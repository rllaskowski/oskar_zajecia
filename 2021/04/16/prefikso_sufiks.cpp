#include <iostream>


using namespace std;

int p[10000000];

void preSuf(string t){
    t = "*" + t;

    p[0] = 0;
    p[1] = 0;

    for (int i = 2; i < t.size(); i++) {
        // i jest dlugoscia tekstu, dla ktorego
        // chcemy obliczyc teraz wynik

        int wsk = p[i-1];

        while (wsk != 0 && t[i] != t[wsk+1]) {
            wsk = p[wsk];
        }

        if(t[i] == t[wsk+1]){
            p[i] = wsk+1;
        } else {
            p[i] = 0;
        }
    }
}

int main() {
    string t, w;
    cin >> t >> w;
    string tekst = w + "#" + t;
    preSuf(tekst);
    for(int i = 0;i<=tekst.size();i++){
        cout << p[i] << " ";
    }
    return 0;
}