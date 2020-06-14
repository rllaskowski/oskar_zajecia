#include <iostream>

using namespace std;

int tab[100001];
int czyByla[100001];

int s;
bool zakonczony;

void ileCzasu(int poziom, int pierwszy){
    if(czyByla[poziom] == pierwszy){
      zakonczony = true;
      return;
    } else if (czyByla[poziom] > 0) {
      return;
    } else{
        czyByla[poziom] = pierwszy;
        s += poziom;
        ileCzasu(tab[poziom], pierwszy);
    }
}

int main()
{
    int n;
    int maks = 1000000;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> tab[i];
    }
    for(int i = 1;i<=n;i++){
        s = 0;
        zakonczony = false;
      
        ileCzasu(i, i);
        if (zakonczony == true && maks > s){
            maks = s;
        }
    }
    cout << maks;
    return 0;
}


/*

1 2 3 4 5 6 7 8  9 10
4 1 1 3 4 1 6 9 10 10


czyByla
1 2 3 4 5 6 7 8 9 10
1 2 1 1 5 6 7 0 0  0


1->4->3->1

2->1


*/