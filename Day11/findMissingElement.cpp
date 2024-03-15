// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n)
{
    int ans = -1;
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int diff = arr[mid] - mid;
        if (diff == 1)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    // Hw --> How can we remove this condition??
    if (ans + 1 == 0)
        return n + 1;

    return ans + 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missingNumber = findMissingNumber(arr, n);
    cout << "Missing number is:\t" << missingNumber << endl;
    return 0;
}