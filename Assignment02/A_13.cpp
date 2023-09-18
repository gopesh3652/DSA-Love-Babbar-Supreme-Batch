// Factorial of a number

#include<iostream>
#include<conio.h>
using namespace std;

int factorial(int number) {
    int fact = 1;
    for(int i = 1; i <= number; i++) {
        fact*=i;
    }
    return fact;
}

int main(void) {
    // clrscr();
    int number;
    cout << "Enter number : " <<endl;
    cin >> number;
    int result = factorial(number);
    cout << "factorial of " << number << " is " << result <<endl;
}