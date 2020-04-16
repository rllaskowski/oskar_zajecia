#include<iostream>

using namespace std;

// W tej tablicy będziemy trzymać informację czy wczytano już dany pomiar
// Wprowadzamy słabsze ograniczenie zadania - wczytane wartości nie przekroczą 1000000
bool pomiary[100001];

int main(){
    int pomiar;
    int roznePomiary = 0;

    while (true) {
        cin >> pomiar;
        
        // Kończymy nasz program po wczytaniu -1
        if(pomiar == -1) {
            break;
        }

        // W zadaniu interesują nas tylko pomiary dodatnie
        if (pomiar > 0){
            if (pomiary[pomiar] == false) {
                // Jeśli wcześniej nie wczytaliśmy takiego pomiaru
                // zaznaczamy w tablicy jego wystąpienie i zwiększamy wynik
                pomiary[pomiar] = true;
                roznePomiary++;
            }
        }
    }

    cout << roznePomiary << endl;
    return 0;
}