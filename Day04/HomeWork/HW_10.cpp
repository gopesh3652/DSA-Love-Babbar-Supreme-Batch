// 1
// 22
// 3 3
// 4  4
// 12345

// Home Work

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int colu = 0; colu < row + 1; colu++)
        {
            if(row == 0 || row == n - 1) {
                cout << colu+1;
            }
            else {
                if(colu == 0) {
                    cout << row+1;
                }
                else if(colu == row + 1 - 1){
                    cout << row+1;
                }
                else {
                    cout << " ";
                }
            }
        }
        cout <<endl;
    }
    
    return 0;
}