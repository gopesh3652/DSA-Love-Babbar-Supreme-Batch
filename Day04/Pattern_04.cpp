// Hollow Pyramid
//     *
//    * *
//   *   *
//  *     *
// *       *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // // My approach
    // for (int row = 0; row < n; row++)
    // {
    //     // space
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }

    //     // star
    //     // for (int colu = 0; colu < n; colu++)
    //     // {
    //     cout << "*";
    //     // }

    //     // space
    //     for (int colu = 0; colu < 2 * row - 1; colu++)
    //     {
    //         cout << " ";
    //     }
    //     // star
    //     // for (int colu = 0; colu < n; colu++)
    //     // {
    //     if (row != 0)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // Babbar Bhaiya approach

    for (int row = 0; row < n; row++)
    {
        // space
        for (int colu = 0; colu < n - row - 1; colu++)
        {
            cout << " ";
        }

        // Starts
        for(int colu = 0; colu < row + 1; colu++) {
            if(colu == 0 || colu == row + 1 - 1) {
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout <<endl;
    }
    

    return 0;
}