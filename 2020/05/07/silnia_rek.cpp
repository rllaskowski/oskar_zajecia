#include <iostream>

using namespace std;


int silnia(int n){
    if(n == 1){
        return 1; 
    }else{
        return n*silnia(n-1);
    } 
}

int fib(int n){
    if(n < 3){
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int nwd(int a, int b) {
    if(b > a){
        swap(a, b);
    }
    if(b == 0){
        return a;
    }
    return nwd(a%b, b);
}

int main() {
    cout << nwd(1, 10000000);
}