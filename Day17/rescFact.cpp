#include <iostream>
using namespace std;

int rescFact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * rescFact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    int ans = rescFact(n);
    cout << ans;
    return 0;
}