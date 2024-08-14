#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int size, int index)
{
    if (index >= size)
        return;

    printArray(arr, size, index + 1);

    cout << arr[index] << " ";
}

bool linearSearchRec(int *arr, int size, int key, int index)
{
    if (index >= size)
        return 0;
    if (arr[index] == key)
        return true;

    return linearSearchRec(arr, size, key, index + 1);
}

int minEle(int *arr, int size, int index, int mini)
{
    if (index >= size)
        return mini;
    if (arr[index] < mini)
        mini = arr[index];
    return minEle(arr, size, index + 1, mini);
}

int main()
{
    int arr[] = {2, 4, 6, 1, 3, 5, 7, 9};
    int size = 5;
    int index = 0;
    int key = 8;
    int mini = INT_MAX;
    // printArray(arr, size, index);
    // if (linearSearchRec(arr, size, key, index))
    //     cout << "found";
    // else
    //     cout << "not found";
    int minEl = minEle(arr, size, index, mini);
    cout << "MIN ELE: " << minEl << endl;
    return 0;
}