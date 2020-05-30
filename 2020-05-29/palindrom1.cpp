#include <iostream>

using namespace std;
int main() {
    int n;
    int m;
    int x;
    int y;
    string a;

    cin >> n;
    cin >> m;
    cin >> a;

    for(int i = 0;i<m;i++) {
        cin >> x;
        cin >> y;

        x--;
        y--;

        bool znaleziono = false;


        for(int j = x;j<y;j++) {
            if(a[j] == a[j+1] || (j+2 <= y && a[j] == a[j+2]) ) {
                znaleziono = true;
                cout << "TAK" << endl;
                break;
            }
        }

        if (znaleziono == false){
              cout << "NIE" << endl;
        }
    }
    return 0;
}
