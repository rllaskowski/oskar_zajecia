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
1 1 2 6 7 7 8 9 9 10 15 16 17


5 7 10 24 40 56
*/


int main() {

    return 0;
}