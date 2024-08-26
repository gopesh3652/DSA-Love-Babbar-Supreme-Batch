#include<iostream>
using namespace std;

int main() {
    // 1. int allocation
    // using new
    int* nint = new int(5);
    cout << *nint << endl;
    // using malloc
    void* ptr = malloc(sizeof(int));
    int* mptr = (int*)ptr;
    *mptr = 5;
    cout << *mptr << endl;
    // or
    int* ptra = (int*)malloc(sizeof(int));
    *ptra = 10;
    cout << *ptra << endl;

    // deletion or freeing memory
    delete nint;
    free(mptr);
    free(ptra);


    // 2. 1D allocation
    // using new
    int* arr = new int[5];
    // using malloc
    int* marr = (int*)malloc(sizeof(int) * 5);

    // freeing memory
    delete[] arr;
    free(marr);


    // 3. 2D allocation
    // using new
    int rows = 5, col = 5;

    int** ptr2d = new int* [rows];

    for (int i = 0; i < rows; i++) {
        ptr2d[i] = new int[col];
    }

    // using malloc

    int** marr2d = (int**)malloc(sizeof(int*) * rows);

    for (int i = 0; i < rows; i++) {
        marr2d[i] = (int*)malloc(sizeof(int) * col);
    }

    // deletion
    for (int i = 0; i < rows; i++) {
        delete[] ptr2d[i];
    }
    delete ptr2d;

    for (int i = 0; i < rows; i++) {
        free(marr2d[i]);
    }
    free(marr2d);

    return 0;
}