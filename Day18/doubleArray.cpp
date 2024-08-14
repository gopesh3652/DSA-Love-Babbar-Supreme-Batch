#include <bits/stdc++.h>
using namespace std;

void doubleArray(int *arr, int size, int index)
{
    if (index >= size)
        return;
    arr[index] = arr[index] * 2;
    doubleArray(arr, size, index + 1);
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8};
    int size = 9;
    int index = 0;
    for (int num : arr)
        cout << num << " ";
    doubleArray(arr, size, index);
    cout << endl;
    for (int num : arr)
        cout << num << " ";
    return 0;
}