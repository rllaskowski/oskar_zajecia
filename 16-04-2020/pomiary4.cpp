#include<iostream>
#include<set>
using namespace std;

set<int> zbior;

int main() {
    int a;

    while(true) {
        cin >> a;
        if(a == -1){
            break;
        }
        if(a > 0){
            zbior.insert(a);
        }
    }

    cout << zbior.size() << endl;
    return 0;
}
