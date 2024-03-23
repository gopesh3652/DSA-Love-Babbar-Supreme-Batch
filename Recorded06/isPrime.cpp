#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

//  most optimized solution to find prime number between 0 and the number
// this theorem is known as sieveof eratosthenes

int countPrime(int n)
{
    if (n <= 0)
        return 0;

    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;

    int ans = 0;
    // for optimization  --> outer loop
    /* j < sqrt(n) */
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            ans++;

            int j = 2 * i;
            // for optimization --> inne loop
            /* j = i*i */
            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
        }
    }
    return ans;
}

int optimizedCountPrime(int n)
{
    if (n <= 0)
        return 0;

    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;

    int ans = 0;
    // for optimization  --> outer loop
    /* j < sqrt(n) */
    for (int i = 2; i < sqrt(n); i++)
    {
        if (prime[i])
        {
            ans++;

            int j = i * i;
            // for optimization --> inne loop
            /* j = i*i */
            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = countPrime(n);
    cout << ans;
    return 0;
}