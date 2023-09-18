// Even odd by bitwise

#include <iostream>
using namespace std;

bool isEvenBitwise(int number)
{
    if ((number & 1) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    cout << "Enter number to check " << endl;
    cin >> number;
    bool isEven = isEvenBitwise(number);
    if (isEven)
    {
        cout << number << " is even.";
    }
    else
    {
        cout << number << " is odd.";
    }
    return 0;
}