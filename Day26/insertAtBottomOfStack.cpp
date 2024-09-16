// Insert at bottom of stack

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
    st.push(data);
    return;
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    int data = 50;
    int size = st.size();

    cout << "Size before insertion: " << size << endl;
    insertAtBottom(st, data);

    size = st.size();
    cout << "Size after insertion: " << size << endl;

    return 0;
}