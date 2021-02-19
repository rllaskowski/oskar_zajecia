#include <iostream>

using namespace std;


int main() {
    cout.precision(2);
    cout.setf(ios::fixed);
    
    float x = 7.567;
    cout << x;
    
    pair <int, int> a, b, c;
    cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second;
    int rx = a.first - b.first;
    int ry = a.second - b.second;
    int rx1 = a.first - c.first;
    int ry1 = a.second - c.second;
    
    /*
    To są te same proste, jesli 
    rx/ry = rx1/ry1
    czyli ich wspolczynniki kierunkowe sa takie same

    rx*ry1 = rx1*ry
    */
   
    if(rx*ry1 == rx1*ry){
        cout << "TAK";
    }

    

    return 0;
}