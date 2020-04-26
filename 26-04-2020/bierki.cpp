#include <iostream>

using namespace std;

bool trojkat(int a,int b,int c){
    int najw = max(a,max(b,c));
    int sumaNajm = a+b+c-najw;

    if (sumaNajm > najw) {
        return true;
    } else {
        return false;
    }

}

/*
7
1
2
8
10
6
1
7
9
9

*/


int main() {

    return 0;
}