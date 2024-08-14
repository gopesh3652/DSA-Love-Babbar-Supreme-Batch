#include <iostream>
using namespace std;

int coinChange(int *arr, int size, int amount) {
    if(amount == 0) {
        return 0;
    }
    int ans = INT_MAX;
    int mini = INT_MAX;
    for(int i = 0; i < size; i++) {
        int coin = arr[i];
        if(coin <= amount)  {
            int recAns = coinChange(arr, size, amount-coin);
            if(recAns != INT_MAX) ans = 1 + recAns;
        }
        mini = min(mini, ans);
    }
    if(ans == INT_MAX) return -1; 
    return mini;
}

int main()
{
    int arr[] = {1, 2, 5};
    int size = 3; 
    int amt = 11;
    int ans = coinChange(arr, size, amt);
    cout << "Total coins:- " << ans << endl;
    return 0;
}