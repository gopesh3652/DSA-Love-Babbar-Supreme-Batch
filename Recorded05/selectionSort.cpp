#include <iostream>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void swapNumber(int *a, int *b)
{
    if (*a == *b)
        return;
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
                minIndex = j;
        }
        swapNumber(&arr[i], &arr[minIndex]);
    }
}

int main()
{
    int arr[] = {1, 5, 7, 43, 12, 45, 76};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before sorting :" << endl;
    printArray(arr, n);
    selectionSort(arr, n);
    cout << "Array after sorting :" << endl;
    printArray(arr, n);
    return 0;
}