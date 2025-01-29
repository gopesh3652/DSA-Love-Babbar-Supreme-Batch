#include<iostream>
#include<deque>
#include<vector>
using namespace std;

void firstNegativeInKWindow(vector<int>& v, int k, int n) {
    deque<int> dq;

    // process first k elements
    for (int i = 0; i < k; i++) {
        int element = v[i];

        if (element < 0) {
            dq.push_back(i);
        }
    }

    // process remaining window  --> removal and addition

    for (int i = k; i < n; i++) {
        // ans of previous
        if (dq.empty()) cout << "0 ";
        else cout << v[dq.front()] << " ";

        // removal
        if (i - dq.front() >= k) {
            dq.pop_front();
        }

        // addition
        if (v[i] < 0) {
            dq.push_back(i);
        }
    }

    if (dq.empty()) cout << "0 ";
    else cout << v[dq.front()];
    cout << endl;
}

int main() {
    int n = 7;
    int k = 3;

    vector<int>v = { 2, -5, 4, -1, -2, 0, 5 };

    firstNegativeInKWindow(v, k, n);
    return 0;
}