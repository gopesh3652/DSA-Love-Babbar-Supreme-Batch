#include<iostream>
#include<stack>
using namespace std;

void insertInSortedStack(stack<int>& st, int& data) {
    if (st.empty() || data > st.top()) {
        st.push(data);
        return;
    }

    int temp = st.top();
    st.pop();
    insertInSortedStack(st, data);
    st.push(temp);
}

int main() {
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    int data = 25;

    insertInSortedStack(st, data);

    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}