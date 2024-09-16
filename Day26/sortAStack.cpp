#include<iostream>
#include<stack>
using namespace std;

void insertInSortedStack(stack<int>& st, int& data) {
    if (st.empty() ||  data > st.top()) {
        st.push(data);
        return;
    }

    int temp = st.top();
    st.pop();
    insertInSortedStack(st, data);
    st.push(temp);
}

void sortStack(stack<int>& st) {
    if (st.empty()) return;

    int temp = st.top();
    st.pop();
    sortStack(st);
    insertInSortedStack(st, temp);

}

int main() {
    stack<int>st;
    st.push(10);
    st.push(30);
    st.push(50);
    st.push(40);
    st.push(20);

    sortStack(st);

    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}