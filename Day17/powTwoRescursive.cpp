#include <iostream>
using namespace std;

int powOfTwo(int n)
{
    if (n == 1) return 2;
    return 2 * powOfTwo(n - 1);
}

int main()
{
    int n;
    cin >> n;
    int ans = powOfTwo(n);
    cout << ans;
    return 0;
}