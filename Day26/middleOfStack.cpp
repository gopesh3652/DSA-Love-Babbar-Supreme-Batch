#include<iostream>
#include<stack>
using namespace std;

int solve(stack<int>& st, int& pos) {
    if (st.empty()) return -1;
    if (pos == 1) return st.top();
    pos--;
    int temp = st.top();
    st.pop();
    int ans = solve(st, pos);
    st.push(temp);
    return ans;
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);

    int pos = st.size();

    if (pos & 1) pos = (pos / 2) + 1;
    else pos = pos / 2;

    cout << "Middle element is: " << solve(st, pos) << endl;
    return 0;
}