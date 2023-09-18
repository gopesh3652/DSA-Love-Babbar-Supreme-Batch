// create number using digit

#include <bits/stdc++.h>
using namespace std;

int createNumberUsingDigit(int numberOfDigit) {
    int num = 0;
    for (int i = 0; i < numberOfDigit; i++)
    {
        cout << "Enter digit :" <<endl;
        int digit;
        cin >> digit;
        num = num*10 + digit;
    }
    return num;
}

int main() {
    // int inputNumber;
    // bool input = 1;
    // int num = 0;
    // int finalDigit = 0;
    // while(input) {
    //     cout << "If you want to stop press 0 else press 1" <<endl;
    //     cin >> input;
    //     if(input == 0) {
    //         finalDigit = num;
    //         break ;
    //     }
    //     cout << "Enter digit number: " <<endl;
    //     cin >> inputNumber;
    //     num = num*10 + inputNumber;
    // }
    // if (finalDigit == 0)
    // {
    //     cout << "No digit formed as no input entered";
    //     return 0;
    // }
    // cout << "Final digit is  " << finalDigit  <<endl;
    // return 0;

    // OR

    // using function and taking input for for number of digit

    int numberOfDigits;
    cout << "Enter number of digitd :" << endl;
    cin >> numberOfDigits;
    int number = createNumberUsingDigit(numberOfDigits);
    cout << "Number formed is :" << number << endl;
    return 0;
}