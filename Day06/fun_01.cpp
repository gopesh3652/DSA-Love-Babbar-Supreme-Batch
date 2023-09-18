// Function to print sum of three numbers

#include<iostream>
using namespace std;

// Without return
// void sumOfThree(int a, int b, int c) {
//     int sum = a + b + c;
//     cout << "Sum is : " << sum <<endl;
// }

// with return
int sum(int a, int b, int c) {
    return (a + b + c);
}

int main() {
    int a ,b ,c;
    cout << "Enter three numbers : " <<endl;
    cin >> a >> b >> c;
    int ans = sum(a, b, c);
    cout << "Sum is :" << ans <<endl; 
    return 0;
}