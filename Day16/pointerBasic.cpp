#include <iostream>
using namespace std;
int main()
{
    // int a = 5;

    // cout << a << endl;
    // cout << &a << endl;

    // cout << endl;

    // int *ptr = &a;
    // int &b = *ptr;

    // cout << *ptr << endl;
    // cout << ptr << endl;
    // cout << &ptr << endl;

    // cout << endl;

    // cout << b <<endl;
    // cout << &b <<endl;

    // int ab = 5;
    // int *ptr = &ab;
    // cout << sizeof(ptr) << endl;

    // cout << endl;

    // char ab2 = 'a';
    // char *ptr2 = &ab2;
    // cout << sizeof(ptr2) << endl;

    // int *name = nullptr;
    // int *name = 0;
    // cout << *name << endl;

    /*MOST IMP OBSERVATION*/
    int arr[5] = {0, 1, 2, 3, 4};
    for (int i = 0; i < 5; i++)
    {
        // these both are correct and this is the internal working of array
        // /  *(arr + i) = arr[i];
        // /  *(i + arr) = i[arr];
        cout << i[arr] << " ";
    }

    return 0;
}
