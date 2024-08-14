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

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        // for (; j >= 0; j--)
        // {
        //     if (arr[j] > key)
        //         arr[j + 1] = arr[j];
        // }
    }
}

int main()
{
    int arr[] = {1, 5, 7, 43, 12, 45, 76};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before sorting :" << endl;
    printArray(arr, n);
    insertionSort(arr, n);
    cout << "Array after sorting :" << endl;
    printArray(arr, n);
    return 0;
}