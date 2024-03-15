#include <iostream>
using namespace std;

int nearlySorted(int *arr, int n, int target)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
            return mid;
        else if (mid - 1 >= 0 && arr[mid - 1] == target)
            return mid - 1;
        else if (mid + 1 < n && arr[mid + 1] == target)
            return mid + 1;
        else if (arr[mid] > target)
            end = mid - 2;
        else
            start = mid + 2;
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {20, 10, 30, 50, 40, 70, 60};
    int target = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int ansIndex = nearlySorted(arr, n, target);
    if (ansIndex == -1)
    {
        cout << "Not Found" << endl;
        return 0;
    }
    cout << "Location of " << target << " is: " << ansIndex << endl;
    return 0;
}