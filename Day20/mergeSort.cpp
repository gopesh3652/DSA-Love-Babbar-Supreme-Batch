#include<bits/stdc++.h>
using namespace std;

void merge(int* nums, int s, int e) {
    int mid = (s + e) / 2;

    int lenLeft = mid - s + 1;
    int lenRight = e - mid;

    int* leftArray = new int[lenLeft];
    int* rightArray = new int[lenRight];

    int k = s;
    for (int i = 0; i < lenLeft; i++) leftArray[i] = nums[k++];

    k = mid + 1;
    for (int i = 0; i < lenRight; i++) rightArray[i] = nums[k++];

    int leftIndex = 0;
    int rightIndex = 0;
    int originalIndex = s;

    while (leftIndex < lenLeft && rightIndex < lenRight) {
        if (leftArray[leftIndex] < rightArray[rightIndex]) nums[originalIndex++] = leftArray[leftIndex++];
        else nums[originalIndex++] = rightArray[rightIndex++];
    }

    while (rightIndex < lenRight) nums[originalIndex++] = rightArray[rightIndex++];
    while (leftIndex < lenLeft) nums[originalIndex++] = leftArray[leftIndex++];

    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int* nums, int s, int e) {
    // invalid array
    if (s > e) return;
    // single array
    if (s == e) return;

    int mid = (s + e) / 2;

    mergeSort(nums, s, mid);
    mergeSort(nums, mid + 1, e);

    merge(nums, s, e);
}

int main() {
    int nums[] = { 2, 4, 6, 3, 1, 4, 8, 9 };
    int size = 8;
    int s = 0;
    int e = size - 1;

    cout << "Before merge sort:- " << endl;
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }

    mergeSort(nums, s, e);

    cout << endl;

    cout << "After merge sort:- " << endl;
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}