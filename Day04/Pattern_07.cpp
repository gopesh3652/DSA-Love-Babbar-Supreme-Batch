// 

// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int colu = 0; colu < 2*row + 1; colu++)
        {
            if((colu)%2 == 0){
                cout << row+1;
            }
            else{
                cout << "*";
            }
        }
        cout <<endl;
        
    }
    
    return 0;
}