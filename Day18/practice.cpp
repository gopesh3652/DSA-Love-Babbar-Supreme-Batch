#include <bits/stdc++.h>
// #include<vector>
using namespace std;

void evenInArray(int *arr, int size, int index, vector<int> &eve)
{
    if (index >= size)
        return;
    if (!(arr[index] & 1))
        eve.push_back(arr[index]);
    evenInArray(arr, size, index + 1, eve);
}

int main()
{
    int arr[] = {2, 4, 6, 1, 3, 5, 7, 9, 10, 19, 22};
    int size = 11;
    int index = 0;
    vector<int> eve;
    evenInArray(arr, size, index, eve);
    for (int i : eve)
        cout << i << " ";
    return 0;
}