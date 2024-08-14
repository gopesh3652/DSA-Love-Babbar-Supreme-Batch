// print index of all occurrence of target in array

#include <iostream>
using namespace std;

void allOccurrence(int *arr, int size, int index, int target)
{
    if (index >= size)
        return;
    if (arr[index] == target)
        cout << index << " ";
    allOccurrence(arr, size, index + 1, target);
}

int main()
{
    int arr[] = {10, 21, 34, 10, 56, 10, 67, 30, 20, 10};
    int size = 10;
    int index = 0;
    int target = 10;
    allOccurrence(arr, size, index, target);
    return 0;
}
