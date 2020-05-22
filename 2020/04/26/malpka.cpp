#include <iostream>

using namespace std;

int nwd(int a, int b) {
    if (a > b) {
        swap(a, b);
    }

    while (a != 0) {
        b = b-a;

        if (a > b) {
            swap(a, b);
        }
    }
    return b;
}

int main() {
    int n;
    int a;
    int b;
    cin >> n;
    for (int i = 0;i<n;i++){
        cin >> a;
        cin >> b;
        cout << n/nwd(a, b)+1;
    }


}