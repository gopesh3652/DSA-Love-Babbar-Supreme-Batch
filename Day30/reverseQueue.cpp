#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseQueue(queue<int>& q) {
    stack<int>st;
    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
}

void reverseUsingRecursion(queue<int>& q) {
    // base case    
    if (q.empty()) {
        return;
    }

    int temp = q.front();
    q.pop();

    reverseUsingRecursion(q);

    q.push(temp);
}

int main() {
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);

    // reverseQueue(q);

    reverseUsingRecursion(q); 

    while (!q.empty()) {
        cout << q.front() << "\t";
        q.pop();
    }
    cout << endl;
    return 0;
}