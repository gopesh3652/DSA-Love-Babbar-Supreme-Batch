// 

// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        char ch;
        for (int colu = 0; colu < row+1; colu++)
        {
            int number = colu + 1;
            ch = number + 'A' - 1;
            cout << ch;
        }

        // jb tk A tk nhi pauchte
        // tb tk print karenge
        for(char alphabet = ch-1; alphabet >= 'A'; alphabet--) {
            cout << alphabet;
        }
        cout <<endl;
    }
    
    return 0;
}