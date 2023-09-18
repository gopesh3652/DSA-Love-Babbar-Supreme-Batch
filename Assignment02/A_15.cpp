// print all prime from 1 to n

#include <iostream>
using namespace std;

bool check_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int is_prime = check_prime(i);
        if (is_prime)
        {
            cout << i << " ";
        }
    }
}