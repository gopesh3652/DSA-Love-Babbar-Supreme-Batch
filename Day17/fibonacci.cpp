#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        // cout << 0 << "\t";
        return 0;
    }
    if (n == 1)
    {
        // cout << 1 << "\t";
        return 1;
    }
    int nextTerm = fibonacci(n - 1) + fibonacci(n - 2);
    // cout << nextTerm << "\t";
    return nextTerm;
}

int main(void)
{
    int n;
    cin >> n;
    int ans = fibonacci(n);
    cout << ans << endl;
    return 0;
}