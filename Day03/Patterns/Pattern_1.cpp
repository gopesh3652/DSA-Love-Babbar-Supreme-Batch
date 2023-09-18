// Square Pattern
// * * * * 
// * * * *
// * * * *
// * * * *

#include<bits/stdc++.h>
using namespace std;

int main(){
    // outer loop --> for rows
    for (int i = 0; i < 4; i++)
    {
        // inner loop -> to print star
        for (int j = 0; j < 4; j++)
        {
            cout << "*" << " ";
        }
        cout <<endl;
        
    }
    
    return 0;
}