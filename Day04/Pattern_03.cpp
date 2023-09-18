// Diamond ( full pyramid + inverted full pyramid )
//    *
//   * *
//  * * *
// * * * *
// * * * *
//  * * *
//   * *
//    *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int n = num/2;

    // Pyramid
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < i + 1; j++)
        {
            // star with space
            cout << "* ";
        }
        cout << endl;
    }

    // Inverted Pyramid
    for(int row = 0; row < n; row++) {
        // space
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        
        // star
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
        
    }

    return 0;
}