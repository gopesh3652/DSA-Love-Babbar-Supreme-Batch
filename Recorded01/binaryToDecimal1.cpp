// Division method

#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal1(int number)
{
    int decimal = 0, i = 0;
    while (number)
    {
        int bit  = number % 10;
        decimal = decimal + bit*pow(2, i++);
        number/=10;
    }
    return decimal;
}

int main()
{
    int number;
    cout << "Enter number:\a" << endl;
    cin >> number;
    int result = binaryToDecimal1(number);
    cout << "Conversion is: " << result << endl;
    return 0;
}