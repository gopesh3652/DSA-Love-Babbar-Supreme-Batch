#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> sieve(int n)
{
    vector<bool> v(n + 1, true);
    v[0] = v[1] = 0;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (v[i])
        {
            int j = i * i;
            while (j <= n)
            {
                v[j] = false;
                j += i;
            }
        }
    }
    return v;
}

vector<bool> segSieve(int l, int r)
{
    // get prime array which will help it to mark segmented array
    vector<bool> primeSieveArray = sieve(sqrt(r));
    vector<int> basePrime;
    for (int i = 0; i < primeSieveArray.size(); i++)
    {
        if (primeSieveArray[i])
        {
            basePrime.push_back(i);
        }
    }
    vector<bool> ss(r - l + 1, true);
    if (l == 0 || l == 1)
        ss[l] = false;

    for (auto prime : basePrime)
    {
        int first_mul = (l / prime) * prime;
        if (first_mul < l)
        {
            first_mul += prime;
        }

        int j = max(first_mul, prime);

        while (j <= r)
        {
            ss[j - l] = false;
            j += prime;
        }
    }
    return ss;
}

int main()
{
    int L, R;
    cin >> L >> R;
    vector<bool> ans = segSieve(L, R);
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i])
        {
            cout << i + L << " ";
        }
    }
    return 0;
}