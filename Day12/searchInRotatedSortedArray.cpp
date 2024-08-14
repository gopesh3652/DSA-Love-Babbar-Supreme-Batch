#include <iostream>
using namespace std;

int pivotElementIndex(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (s == e)
            return s;
        if (m + 1 < n && arr[m] > arr[m + 1])
            return m;
        else if (m - 1 >= 0 && arr[m] < arr[m - 1])
            return m - 1;
        else if (arr[m] < arr[s])
            e = m - 1;
        else
            s = m;
    }
    return -1;
}

int binarySearch(int *arr, int s, int e, int key)
{

    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (arr[m] == key)
            return m;
        else if (arr[m] > key)
            e = m - 1;
        else
            s = m + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {4, 5};
    int key = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivot = pivotElementIndex(arr, n);

    int ans = -1;

    if (key >= arr[0] && key <= arr[pivot])
        ans = binarySearch(arr, 0, pivot, key);
    else if (key >= arr[pivot + 1] && key <= arr[n - 1])
        ans = binarySearch(arr, (pivot + 1), n - 1, key);
    cout << "Index of " << key << " is:\t" << ans << endl;
    return 0;
}