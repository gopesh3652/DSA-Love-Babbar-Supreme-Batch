#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseK(queue<int>& q, int& k) {
    int temp = k;
    int size = q.size();
    stack<int>st;

    if (k > size || k == 0) return;

    while (temp) {
        st.push(q.front());
        q.pop();
        temp--;
    }

    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    temp = size - k;

    while (temp) {
        int element = q.front();
        q.push(element);
        q.pop();
        temp--;
    }
}

int main() {
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    int k = 3;

    reverseK(q, k);

    while (!q.empty()) {
        cout << q.front() << "\t";
        q.pop();
    }
    cout << endl;
    return 0;
}