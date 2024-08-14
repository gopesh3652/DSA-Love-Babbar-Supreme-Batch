#include <iostream>
using namespace std;

int pivotElementIndex(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        int m = s + (e - s) / 2;
        if ((m + 1 < n) && arr[m] > arr[m + 1])
            return m;
        else if ((m - 1 >= 0) && arr[m] < arr[m - 1])
            return m - 1;
        else if (arr[m] < arr[s])
            e = m - 1;
        else
            s = m;
    }
    return -1;
}

int main()
{
    int arr[] = {30, 40, 50, 10, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n;
    int pivotIndex = pivotElementIndex(arr, n);
    cout << "Pivot index is:\t" << pivotIndex << endl;
    return 0;
}