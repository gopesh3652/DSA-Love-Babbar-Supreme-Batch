// Prime or not

#include <iostream>
#include <cmath>
using namespace std;

bool check_prime(int number)
{
    // int i = 2;
    for (int i = 2; i <= sqrt(number); i++)
    {
        // condition can be --> ( i <=n/2 ) or ( i <= sqrt(n)) or (i < n)
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    int n;
    cin >> n;
    bool isPrime = check_prime(n);
    if (isPrime)
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << n << " is not a prime number" << endl;
    }
    return 0;
}