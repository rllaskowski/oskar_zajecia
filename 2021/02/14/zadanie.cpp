#include <iostream>


using namespace std;

int dwieOstatnie(string n) {
    int a = n[n.size()-1]-'0';
    int b = 0;
    if(n.size() > 1){
        b = n[n.size()-2] - '0';
    }
    int c = a + b*10;
    return c;
}

int main() {
    string n;
    cin >> n;
    
    int r1 = 1;
    int r2;
    int r3;
    int r4;

    if(dwieOstatnie(n)%4 == 0){
        r2 = 1;
    }else if(dwieOstatnie(n)%4 == 1){
        r2 = 2;
    }else if(dwieOstatnie(n)%4 == 3){
        r2 = 3;
    }else{
        r2 = 4;
    }

    if(dwieOstatnie(n)%4 == 0){
        r3 = 1;
    }else if(dwieOstatnie(n)%4 == 1){
        r3 = 3;
    }else if(dwieOstatnie(n)%4 == 2){
        r3 = 4;
    }else{
        r3 = 2;
    }

    if(dwieOstatnie(n)%2 == 0){
        r4 = 1;
    }else{ 
        r4 = 4;
    }
    
    int s = (r1 + r2 + r3 + r4)%5;
    cout << s;
    return 0;
}