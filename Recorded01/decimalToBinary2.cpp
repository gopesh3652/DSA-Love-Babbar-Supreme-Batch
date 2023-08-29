// Bitwise Meyhod

#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int number)
{
    int binaryno = 0, i = 0;
    while (number > 0)
    {
        int bit = number & 1;
        binaryno = binaryno + bit * pow(10, i++);
        number = number >> 1;
    }
    return binaryno;
}

int main()
{
    int number;
    cout << "Enter number:\a" << endl;
    cin >> number;
    int result = decimalToBinary(number);
    cout << "Conversion is: " << result << endl;
    return 0;
}