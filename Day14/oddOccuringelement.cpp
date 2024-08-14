#include <iostream>
using namespace std;

int oddOccuringElement(int *arr, int n)
{
    // mid & 1 == odd if true
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (start == end)
            return start;
        if (mid % 2 == 0)
        {
            if (mid + 1 < n && arr[mid] == arr[mid + 1])
                start = mid + 2;
            else
            {
                // ans does not lost
                end = mid;
            }
        }
        else
        {
            if (mid - 1 >= 0 && arr[mid] == arr[mid - 1])
                start = mid + 1;
            else
                end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 1, 5, 5, 2, 2, 3, 3, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ansIndex = oddOccuringElement(arr, n);
    // cout << "Location of " << target << " is: " << ansIndex << endl;
    cout << "Element is : " << arr[ansIndex] << endl;
    return 0;
}