#include <iostream>
using namespace std;

int find(int dividend, int divisor)
{
    int start = 0, end = dividend;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (mid * divisor == dividend)
            return mid;
        else if (mid * divisor < dividend)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

// divisor * quotient + remainder = dividend
int main()
{
    int dividend = -26, divisor = -5;
    int quot = find(abs(dividend), abs(divisor));
    if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0))
        quot = 0 - quot;
    cout << quot << endl;
    return 0;
}