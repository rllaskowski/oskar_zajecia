#include <iostream>
#include <map>
using namespace std;

// W tej mapie będziemy trzymać informację czy wczytano już dany pomiar
// Korzystając z map, możemy odnieść się nawet do tak dużych indeksów jak 
// 1000000000 - czyli maksymalnej wartości pomiaru
map<int, bool> pomiary;

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