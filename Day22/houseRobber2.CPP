#include<iostream>
#include<cmath>
using namespace std;

int houseRobberTwo(int* arr, int index, int size) {
    if (index > size) return 0;
    int sum1 = arr[index] + houseRobberTwo(arr, index + 2, size);
    int sum2 = 0 + houseRobberTwo(arr, index + 1, size);
    return max(sum1, sum2);
}

int solve(int* arr, int s, int e) {
    if (e == 1) return arr[0];
    int option1 = houseRobberTwo(arr, s, e - 1);
    int option2 = houseRobberTwo(arr, s + 1, e);
    return max(option1, option2);
}

int main() {
    int arr[] = { 1, 2, 3, 1, 9 };
    int size = 5;
    int index = 0;
    int ans = solve(arr, index, size - 1);
    cout << "Max sum:-\t" << ans << endl;
    return 0;
}