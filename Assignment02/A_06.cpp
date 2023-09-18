// Fancy pattern 2
// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // My approach
    // int num = 1;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (col % 2 == 0)
    //         {
    //             cout << num++;
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }


    // Lakshay Bhaiya approach
    int c = 1;
    // growing phase
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
           cout << c;
           c++;
           if(col < row) {
            cout <<"*";
           }
        }
        cout << endl;
    }
    // shrinking phase
    int start = c - n;
    for(int row = 0; row < n; row++){
        int k = start;
        for(int col = 0; col <= n - row - 1; col++) {
            cout << k;
            k++;
            if(col < n - row - 1) {
            cout <<"*";
           }
        }
        start = start - (n - row - 1);
        cout <<endl;
    }
    return 0;
}