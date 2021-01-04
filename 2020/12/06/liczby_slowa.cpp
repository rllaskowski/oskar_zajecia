#include <iostream>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

map <string, int> liczby;

void wstaw() {
    liczby["jeden"] = 1;
    liczby["dwa"] = 2;
    liczby["trzy"] = 3;
    liczby["cztery"] = 4;
    liczby["piec"] = 5;
    liczby["szesc"] = 6;
    liczby["siedem"] = 7;
    liczby["osiem"] = 8;
    liczby["dziewiec"] = 9;

    liczby["dziesiec"] = 10;
    liczby["jedenascie"] = 11;
    liczby["dwanascie"] = 12;
    liczby["trzynascie"] = 13;
    liczby["czternascie"] = 14;
    liczby["pietnascie"] = 15;
    liczby["szesnascie"] = 16;
    liczby["siedemnascie"] = 17;
    liczby["osiemnascie"] = 18;
    liczby["dziewietnascie"] = 19;

    liczby["dwadziescia"] = 20;
    liczby["trzydziesci"] = 30;
    liczby["czterdziesci"] = 40;
    liczby["piecdziesiat"] = 50;
    liczby["szescdziesiat"] = 60;
    liczby["siedemdziesiat"] = 70;
    liczby["osiemdziesiat"] = 80;
    liczby["dziewiecdziesiat"] = 90;
    
    liczby["sto"] = 100;
    liczby["dwiescie"] = 200;
    liczby["trzysta"] = 300;
    liczby["czterysta"] = 400;
    liczby["piecset"] = 500;
    liczby["szescset"] = 600;
    liczby["siedemset"] = 700;
    liczby["osiemset"] = 800;
    liczby["dziewiecset"] = 900;
       
}

int main() {
    string linia;
    long long int s = 0;
    long long int s2 = 0;
    wstaw();
    getline(cin, linia);

    vector <string> slowa;
    stringstream ss(linia);

    string slowo;
    
    while ((ss >> slowo)) {
        slowa.push_back(slowo);
    }

    for (int i = 0; i < slowa.size(); i++) {
        if(slowa[i]=="tysiecy"||slowa[i]=="tysiac"||slowa[i]=="tysiace"){
            s+=s2*1000;
            s2=0;
        } else if(slowa[i]=="milionow"||slowa[i]=="milion"||slowa[i]=="miliony"){
            s+=s2*1000000;
            s2=0;
        }else if(slowa[i]=="miliardow"||slowa[i]=="miliard"||slowa[i]=="miliardy"){
            s+=s2*1000000000;
            s2=0;
        }else{
            if(liczby.find(slowa[i]) == liczby.end()) { 
                cout << "NIE";
                return 0;
            }
            if(liczby[slowa[i]]>=s2){
                cout << "NIE";
                return 0;
            }
          
            s2 += liczby[slowa[i]];
        }
    }
    s+=s2;
    if(s == 0){
        cout << "NIE";
    }
    cout << s << endl;
}