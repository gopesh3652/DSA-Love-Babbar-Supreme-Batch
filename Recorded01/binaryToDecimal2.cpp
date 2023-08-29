// Bitwise method

#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal2(int number)
{
    int decimal = 0, i = 0;
    while (number)
    {
        int bit = number & 1;
        decimal = decimal + bit * pow(2, i++);
        number = number >> 1;
    }
    return decimal;
}

int main()
{
    int number;
    cout << "Enter number:\a" << endl;
    cin >> number;
    int result = binaryToDecimal2(number);
    cout << "Conversion is: " << result << endl;
    return 0;
}