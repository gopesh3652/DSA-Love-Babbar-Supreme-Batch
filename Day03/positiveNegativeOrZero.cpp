#include<bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cout << "Enter number: ";
    cin >> number;
    if(number > 0) {
        cout << number << " is posiive." <<endl;
    }
    else if (number < 0) {
        cout << number << " is negative." <<endl;
    }
    else {
        cout << number << " is zero." <<endl;
    }
    return 0;
}