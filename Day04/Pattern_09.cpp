// hollow inverted half pyramid

// *****
// *  *
// * *
// **
// *

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int colu = 0; colu < n - row; colu++)
        {
            if(row == 0 || row == n - 1){
                cout << "*";
            }
            else {
                if(colu == 0 || colu == n - row - 1) {
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    
    return 0;
}