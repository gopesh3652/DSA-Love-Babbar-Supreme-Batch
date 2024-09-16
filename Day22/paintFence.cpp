// Painting fence algorithm

#include<iostream>
using namespace std;

int solve(int n, int k) {
    if (n == 1) return k;
    if (n == 2) return k + k * (k - 1);

    int ans = (k - 1) * (solve(n - 1, k) + solve(n - 2, k));
    return ans;
}

int main() {
    int n = 3, k = 3;
    int ans = solve(n, k);
    cout << "Total ways:-\t" << ans << endl;
    return 0;
}