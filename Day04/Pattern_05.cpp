// Inverted hollow pyramid

// *       * 
//  *     * 
//   *   * 
//    * * 
//     * 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        // space
        for (int colu = 0; colu < row; colu++)
        {
            cout << " ";
        }

        // star
        for (int colu = 0; colu < n - row; colu++)
        {
            if(colu == 0 || colu == n - row - 1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout <<endl;
        
        
    }
    
    return 0;
}