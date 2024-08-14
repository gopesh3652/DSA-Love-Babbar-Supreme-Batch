#include <bits/stdc++.h>
using namespace std;

void maxInArray(int *arr, int size, int index, int &maxi)
{
    if (index >= size)
        return;
    maxi = max(maxi, arr[index]);
    return maxInArray(arr, size, index + 1, maxi);
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8};
    int size = 9;
    int index = 0;
    int maxi = INT_MIN;
    maxInArray(arr, size, index, maxi);
    cout << maxi;
    return 0;
}
