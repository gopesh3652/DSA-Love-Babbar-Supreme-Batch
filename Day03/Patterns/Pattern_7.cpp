// Inverted numeric half pyramid
// 12345
// 1234
// 123
// 12
// 1

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 5;
    for(int row = 0; row < num; row++) {
        for(int col = 0; col < num-row; col++) {
            cout << col+1;
        }
        cout <<endl;
    }
    return 0;
}