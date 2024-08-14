#include<bits/stdc++.h>
using namespace std;

// TC --> O(b)
int slowExponentian(int a, int b) {
    int ans = 1;
    for(int i = 0; i < b; i++) {
        ans *= a;
    }
    return ans;
}

// TC --> O(log b)
int fastExponentian(int a, int b) {
    int ans = 1;
    while(b > 0) {
        if(b & 1) {
            ans = ans * a;
        }
        a = a * a;
        b >>= 1;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ansSlow = slowExponentian(a, b);
    int ansFast = fastExponentian(a, b);
    cout << "SLOW: " << ansSlow <<endl;
    cout << "FAST: " << ansFast <<endl;
    return 0;
}