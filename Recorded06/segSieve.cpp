#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> getPrime(int n)
{
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i])
        {
            int j = i * i;

            while (j <= n)
            {
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;
}

vector<bool> primeBetweenRange(int L, int R)
{
    vector<bool> primeSieve = getPrime(sqrt(R));
    vector<int> basePrime;

    for (int i = 0; i < primeSieve.size(); i++)
        if (primeSieve[i])
            basePrime.push_back(i);

    vector<bool> segmentedSieve(R - L + 1, true);

    if (L == 0 || L == 1)
        segmentedSieve[L] = false;

    for (auto prime : basePrime)
    {
        int first_mul = (L / prime) * prime;
        if (first_mul < L)
        {
            first_mul += prime;
        }
        int j = max(prime, first_mul);

        while (j <= R)
        {
            segmentedSieve[j - L] = false;
            j += prime;
        }
    }
    return segmentedSieve;
}

int main()
{
    int L, R;
    cin >> L >> R;

    vector<bool> ss = primeBetweenRange(L, R);

    for (int i = 0; i < ss.size(); i++)
        if (ss[i])
            cout << L + i << endl;
}