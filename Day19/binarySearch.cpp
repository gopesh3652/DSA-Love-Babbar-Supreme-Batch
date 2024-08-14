#include <iostream>
using namespace std;

// int binS(int *arr, int s, int e, int key)
// {
//     if (s > e)
//     {
//         return -1;
//     }
//     int mid = s + (e - s) / 2;
//     if (arr[mid] == key)
//         return mid;
//     if (arr[mid] < key)
//     {
//         return binS(arr, mid + 1, e, key);
//     }
//     else
//     {
//         return binS(arr, s, mid - 1, key);
//     } 
// }

int binarySearch(int *arr, int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            return binarySearch(arr, s, mid - 1, key);
        }
        else
        {
            return binarySearch(arr, mid + 1, e, key);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;
    int start = 0;
    int target = 70;
    // int ans = binS(arr, start, size, target);
    int ans = binarySearch(arr, start, size, target);
    cout << ans <<endl;

    return 0;
}