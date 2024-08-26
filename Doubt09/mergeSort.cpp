// mergesort withoud dynamic memory allocation
// as DMA is a heavy task --> new , delete

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& v, vector<int>& temp, int start, int end, int mid) {
    int i = start, j = mid + 1;

    int k = start;

    while (i <= mid && j <= end) {
        if (v[i] <= v[j]) temp[k++] = v[i++];
        else temp[k++] = v[j++];
    }

    // handling remaining case
    while (i <= mid) temp[k++] = v[i++];
    while (j <= end) temp[k++] = v[j++];

    while (start <= end) {
        v[start++] = temp[start];
        // start++;
    }
}

void mergeSort(vector<int>& v, vector<int>& temp, int start, int end) {
    if (start >= end) return;

    int mid = (start + end) / 2;

    mergeSort(v, temp, start, mid);
    mergeSort(v, temp, mid + 1, end);

    merge(v, temp, start, end, mid);
}

void print(vector<int>& v) {
    for (int i : v) {
        cout << i << "\t";
    }
    cout << endl;
}

int main() {
    vector<int>v = { 2, 4, 6, 3, 1, 2, 4, 0, 8 };
    vector<int>temp(v.size(), 0);

    cout << "Before sort:- " << endl;
    print(v);
    mergeSort(v, temp, 0, v.size() - 1);
    cout << "After sort:- " << endl;
    print(v);

    return 0;
}