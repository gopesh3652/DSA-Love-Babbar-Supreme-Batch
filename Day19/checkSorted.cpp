#include <iostream>
using namespace std;

bool checkSorted(int *arr, int size, int index)
{
    if (index >= size)
        return 1;
    if (arr[index] < arr[index - 1])
        return 0;
    checkSorted(arr, size, index + 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int index = 1;
    if (checkSorted(arr, size, index))
    {
        cout << "sorted" << endl;
        return 0;
    }
    cout << "Not sorted" << endl;  
    return 0;
}





