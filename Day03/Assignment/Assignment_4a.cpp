// full pyramid
//    *   
//   ***
//  *****
// *******

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    for (int row = 0; row < n; row++)
    {
        int k = 0;
        for (int col = 0; col < ((2*n)-1); col++)
        {
            if(col < n - row - 1){
                cout << " ";
            }
            else if (k <  ((2 * row) + 1)) {
                cout << "*";
                k++;    
            }
            else {
                cout << " ";
            }
        }
        cout <<endl;
    }
    
    return 0;
}