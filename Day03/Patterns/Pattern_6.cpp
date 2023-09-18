// Numeric half pyramid
// 1
// 12
// 123
// 1234
// 12345

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    for(int row = 0; row < n; row++){
        int num = 1;
        for(int col = 0; col < row+1; col++) {
            cout << num;
            num++;
        }
        cout <<endl;
    }
    return 0;
}