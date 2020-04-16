#include <iostream>
#include <set>
using namespace std;

// W tym zbiorze będziemy trzymali wszystkie różne wczytane wartości pomiarów
set<int> pomiary;

int main(){
    int pomiar;

    while (true) {
        cin >> pomiar;
        
        // Kończymy nasz program po wczytaniu -1
        if(pomiar == -1) {
            break;
        }

        // W zadaniu interesują nas tylko pomiary dodatnie
        if (pomiar > 0){
            // Dodanie nowego pomiaru do zbioru
            // nic nie zrobi jeśli ten pomiar już tam występował!
            pomiary.insert(pomiar);
        }
    }

    cout << pomiary.size();
    return 0;
}