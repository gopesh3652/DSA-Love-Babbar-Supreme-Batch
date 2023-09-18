#include<bits/stdc++.h>
using namespace std;

int main(){
    int sides;
    cout << "Enter sides: " <<endl;
    cin >> sides;
    if (sides == 3)
        cout << "It is a triangle" <endl;
    else if (sides == 4) {
        cout << "Rectangle" <<endl;
    }
    else if(sides == 5) {
        cout << "Pentagon" <<endl;
    }
    else
        cout << "Out of scope sides" <<endl;
    return 0;
}