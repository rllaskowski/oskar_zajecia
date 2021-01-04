#include<iostream>

using namespace std;

// W tej tablicy będziemy trzymać wszystkie różne wczytane dodane pomiary
int pomiary[100000];

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
            bool znaleziona = false;

            // Przeszukujemy zapisane przez nas pomiary
            for (int j = 0;j < roznePomiary; j++){
                if (pomiary[j] == pomiar) {
                    znaleziona = true;
                    break;
                }
            }

            if (znaleziona == false) {
                // W przypadku nie znalezienia w tablicy pomiarów wczytanej wartości   
                // dodajemy ją w odpowiednim miejscu oraz zwiększamy wynik  
                pomiary[roznePomiary] = pomiar;
                roznePomiary++;
            }

        }
    }

    cout << roznePomiary << endl;
    return 0;
}