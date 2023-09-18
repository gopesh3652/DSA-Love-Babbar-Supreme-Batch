// flipped solid diamond
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****


#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    int n = num/2;

    // for above half
    for (int row = 0; row < n; row++)
    {
        // star --> inverted half pyramid
        for (int colu = 0; colu < n - row; colu++)
        {
            cout << "*";
        }

        // space --> full pyramid
        for(int colu = 0; colu < 2 * row + 1; colu++) {
            cout << " ";
        }
        // star --> inverted half pyramid
        for (int colu = 0; colu < n - row; colu++)
        {
            cout << "*";
        }
        cout <<endl;
        
    }

    // for lower half
    for (int row = 0; row < n; row++)
    {
        // star --> half pyramid
        for (int colu = 0; colu < row + 1; colu++)
        {
            cout << "*";
        }

        // for space --> inverted full pyramid
        for (int colu = 0; colu < 2*n - 2*row - 1; colu++)
        {
            cout << " ";
        }

        // star --> half pyramid
        for (int colu = 0; colu < row + 1; colu++)
        {
            cout << "*";
        }
        cout <<endl;
        
    }
    

    
    return 0;
}