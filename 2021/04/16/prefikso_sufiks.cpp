#include <iostream>


using namespace std;

int p[10000000];

int main() {
    string t;

    cin >> t;

    t = "*" + t;

    p[0] = 0;
    p[1] = 0;

    for (int i = 2; i < t.size(); i++) {
        // i jest dlugoscia tekstu, dla ktorego
        // chcemy obliczyc teraz wynik

        int wsk = p[i-1];

        while () {
            
        }

        if(t[i] == t[wsk+1]){
            p[i] = wsk+1;
        }
    }

    return 0;
}