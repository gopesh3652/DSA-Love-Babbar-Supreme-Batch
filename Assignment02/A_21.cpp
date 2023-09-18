// Print all digits of an integer

#include<iostream>
using namespace std;

void digitOfAnInteger(int integerNumber) {
    while(integerNumber) {
        int digit = integerNumber%10;
        integerNumber /= 10;
        cout << "Digit is :" << digit <<endl;
    }
}

int main(void) {
    int integerNum;
    cout << "Enter number :" <<endl;
    cin >>integerNum;
    digitOfAnInteger(integerNum);
    return 0;
}