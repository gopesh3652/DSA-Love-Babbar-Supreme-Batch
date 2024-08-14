#include<bits/stdc++.h>
using namespace std;

void merge() {

}

void mergeSort(int* nums, int s, int e) {
    // invalid array
    if (s > e) return;
    // single array
    if (s == e) return;

    int mid = (s + e) / 2;

    mergerSort(nums, s, mid);
    mergerSort(nums, mid + 1, e);

    merge(nums, s, e, mid);
}

int main() {
    int nums[] = { 2, 4, 6, 3, 1, 4, 8, 9 };
    int s = 0;
    int e = 7;
    mergeSort(nums, s, e)
        return 0;
}