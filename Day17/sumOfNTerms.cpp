#include <iostream>
using namespace std;

int sumOfNTerms(int n)
{
    if (n == 0)
        return 0;
    int ans = n + sumOfNTerms(n - 1);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = sumOfNTerms(n);
    cout << ans << endl;
    return 0;
}