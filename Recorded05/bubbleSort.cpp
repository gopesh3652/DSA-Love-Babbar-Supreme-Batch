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
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swapNumber(&arr[j], &arr[j + 1]);
        }
    }
}

int main()
{
    int arr[] = {1, 5, 7, 43, 1, 45, 76};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before sorting :" << endl;
    printArray(arr, n);
    bubbleSort(arr, n);
    cout << "Array after sorting :" << endl;
    printArray(arr, n);
    return 0;
}