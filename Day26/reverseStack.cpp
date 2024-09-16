#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& st, int& data) {
    if (st.empty()) {
        st.push(data);
        return;
    }

    int temp = st.top();
    st.pop();
    insertAtBottom(st, data);
    st.push(temp);
}

void reverse(stack<int>& st) {
    if (st.empty()) return;
    int temp = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st, temp);
}

int main() {
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    reverse(st);

    while (st.size() != 0) {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}