#include <iostream>

using namespace std;


/*
10 0


87686713248 0

a > b
nwd(a, b) = nwd(a%b, b)


a > b

10 5

b%a = 5%10 = 5


Wzór na miejsce zerowe funkcji postaci f(x) = a*x+b to -b/a

a = 4
b = 8

a = 15 b = 21

b = 4
a = 8


*/

int bezw(int a){
    if(a < 0){
        a *= -1;
    }
    return a;
}

int nwd(int a, int b){
    if (b>a){
        swap(a, b);
    }
    if (b == 0) {
        return a;
    }
    return nwd(a%b, b);   
}

int main() {
    int n, a, b, c;
    cin >> n;

    for(int i = 0;i<n;i++){
        cin >> a >> b;
        if(b%a == 0){
            cout << -b / a << endl;
        }else {
            // wynikiem bedzie jakis ulamek - skrocmy go
            c = nwd(bezw(a), bezw(b));
            if(-b < 0 && a < 0){
                cout << b/c << '/' << -a/c << endl;
            }else if(a < 0){
                cout << b/c << '/' << -a/c << endl;
            } else {
                cout << -b/c << '/' << a/c << endl;
            }
            
        }
    }
    return 0;

}
