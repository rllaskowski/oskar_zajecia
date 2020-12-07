#include <iostream>
#include <algorithm>

using namespace std;

int mandaty[100001];
int numer[100001];
pair <int, int> pary[100001];

long long int suma(int n, int m){
    long long int m1 = m;
    long long n1 = n;

    while (m1>0){
        m1 /= 10;
        n1 *= 10;
    }
    return n1 + m;
}

int main(){
    int n;
    cin >> n;
    int j = n;
    long long int s = 0;

    for(int i = 0;i<n;i++){
        cin >> mandaty[i];
    }
    for(int i = 0;i<n;i++){
        cin >> numer[i];
    }

    sort(mandaty, mandaty+n);
    sort(numer, numer+n);

    for(int i = 0;i<n;i++){
        j--;
        pary[i].first = mandaty[i];
        pary[i].second = numer[j];

        s += suma(pary[i].first, pary[i].second);
    }
    cout << s;
    return 0;
}