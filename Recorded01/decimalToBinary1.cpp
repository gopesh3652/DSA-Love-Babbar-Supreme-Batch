// Division Method

#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int number)
{
    int binaryno = 0, i = 0;
    while (number > 0)
    {
        int bit = number % 2;
        binaryno = binaryno + bit * pow(10, i++);
        number /= 2;
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