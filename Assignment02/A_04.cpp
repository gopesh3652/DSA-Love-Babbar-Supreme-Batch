// Solid half diamod

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int row = 0; row < 2*n - 1; row++) {
        // int cond = 0;
        // if(row < n) {
        //     cond = row;
        // }
        // else {
        //     cond = n - (row%n)- 2;
        // }

        // OR

        int cond = row < n ? row : (n - (row%n) - 2);

        for(int col = 0; col <= cond; col++) {
            cout << "*";
        }
        cout <<endl;
    }
    return 0;
}