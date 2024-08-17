#include<iostream>
using namespace std;

void quickSort(int* arr, int start, int end) {
    if (start >= end) return;

    int i = start - 1;
    int j = start;
    int pivot = end;

    while (j < pivot) {
        if (arr[j] < arr[pivot]) {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }

    i++;
    swap(arr[i], arr[pivot]);
    quickSort(arr, start, i - 1);
    quickSort(arr, i + 1, end);
}

void print(int* arr, int n) {

    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main() {
    int arr[8] = { 7, 2, 1, 8, 6, 3, 5, 4 };
    int n = 8;
    int start = 0;
    int end = n - 1;

    cout << "Before sorting:- " << endl;
    print(arr, n);

    quickSort(arr, start, end);

    cout << "After sorting:- " << endl;
    print(arr, n);
    return 0;
}