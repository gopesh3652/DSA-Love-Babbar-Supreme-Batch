#include <bits/stdc++.h>
using namespace std;

// most optimized way to find gcd of two numbers

int gcd(int a, int b)
{
    if (a == 0) return b;
    if (b == 0) return a;

    while (a > 0 && b > 0)
    {
        if (a > b) a = a - b;
        else b = b - a;
    }
    return a == 0 ? b : a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = gcd(a, b);
    cout << ans;
    return 0;
}