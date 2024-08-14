#include <iostream>
using namespace std;

int mySqrt(int n)
{
    cout << endl;
    int s = 0, e = n;
    int ans = 0;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid * mid <= n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ans;
}

double precisionSqrt(int n)
{
    double sqrt = mySqrt(n);
    int precision = 5;
    double step = 0.1;
    for (int i = 0; i < precision; i++)
    {
        double temp = sqrt;
        while (temp * temp <= n)
        {
            sqrt = temp;
            temp = temp + step;
        }
        step = step / 10;
    }
    return sqrt;
}

int main()
{
    cout << endl;
    int n = 51;
    double ans = precisionSqrt(n);
    cout << "Square root of " << n << " is: " << ans << endl;
    cout << endl;
    return 0;
}