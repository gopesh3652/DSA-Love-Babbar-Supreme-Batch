// either one oe two steps

#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    if (n == 0) return 1;
    if (n < 0) return 0;

    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    int n = 3;
    int ans = climbStairs(n);
    cout << "Total ways to climb stairs:-\t" << ans << endl;
}

