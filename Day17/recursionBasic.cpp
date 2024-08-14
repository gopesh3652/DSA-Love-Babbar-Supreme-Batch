#include <iostream>
using namespace std;

void countReverse(int n)
{
    if (n == 0)
        return;
    cout << n << "\t";
    return countReverse(n - 1);
}

void count(int n)
{
    if (n == 0)
        return;
    count(n - 1);
    cout << n << "\t";
    return;
}

int main()
{
    int n;
    cin >> n;
    count(n);
    cout << "\n";
    countReverse(n);
    return 0;
}