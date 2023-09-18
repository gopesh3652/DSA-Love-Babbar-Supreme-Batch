// Full Pyramid
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
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
        cout <<endl;
        
    }
    
    return 0;
}