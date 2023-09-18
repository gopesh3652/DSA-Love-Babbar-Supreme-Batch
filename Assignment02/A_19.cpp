// count all set bits

#include <iostream>
using namespace std;

int countSetBit(int n)
{
    // using division

    // int count = 0;
    // while(n > 0) {
    //     int bit = n%2;
    //     if(bit == 1) {
    //         count++;
    //     }
    //     n=n/2;
    // }
    // return count;

    // or
    
    // using bitwise

    int num = n;
    int count = 0;
    while (/* num > 0  or*/  num)
    {
        if (/* num & 1 == 1 or*/ num&1)
        {
            count++;
        }
        // num = num>>1;
        num >>= 1;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter number to count the set bits: " << endl;
    cin >> n;
    int ans = countSetBit(n);
    cout << "Number of set bits: " << ans << endl;
}