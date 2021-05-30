#include <iostream>
#include <queue>
#include <stack>
#include <map>

using namespace std;

map <char, int> prior;

bool czyCyfra(char h){
    return h >= '0' && h <= '9';
}

/*
Wczytuje liczbe znajdujaca sie w zmiennej tekst zaczynajac od indeksu i
*/


long long wczytajLiczbe(string tekst, int &i) {
    long long int s = 0;
    while(i < tekst.size() && czyCyfra(tekst[i])){
        s*=10;
        s+=tekst[i]-'0';
        i+=1;
    }
    i--;
    return s;
}

bool czyOperator(char h){
    return h == '/' || h == '+' || h == '-' || h == '*' || h == '^';
}

int main() {
    prior['('] = 0;
    prior['+'] = 1;
    prior['-'] = 1;
    prior['/'] = 2;
    prior['*'] = 2;
    prior['^'] = 3;
    
    
    queue <pair<bool, int>> kWyjsciowa;
    stack <char> stos;
    string dzialanie;
    getline(cin, dzialanie);    
    cin.ignore();
    for(int i = 0;i<dzialanie.size();i++){
        if(czyCyfra(dzialanie[i])){
            long long l = wczytajLiczbe(dzialanie, i);
            kWyjsciowa.push(make_pair(true, l));
        }else if(czyOperator(dzialanie[i])){
            while(!stos.empty() && prior[stos.top()] >= prior[dzialanie[i]]){
                kWyjsciowa.push(make_pair(false, stos.top()));
                stos.pop();
            }
            stos.push(dzialanie[i]);
        }else if(dzialanie[i] == '('){
            stos.push('(');
        }else if(dzialanie[i] == ')'){
            while(stos.top() != '('){
                kWyjsciowa.push(make_pair(false, stos.top()));
                stos.pop();
            }
            stos.pop();
        }
    }
    
    return 0;
}