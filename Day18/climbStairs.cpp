// LC - 70

#include <iostream>
using namespace std;

int climbStairs(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    int ans = climbStairs(n - 1) + climbStairs(n - 2);
    return ans;
}

int main()
{
    int n = 7;
    cin >> n;
    int ans = climbStairs(n);
    cout << ans;
    return 0;
}