// LC -155 Min stack
#include<iostream>
#include<vector>
using namespace std;

class MinStack {
    public:
    vector<pair<int, int>>st;

    void push(int val) {
        if (st.empty()) {
            pair<int, int> p;
            p.first = p.second = val;
            st.push_back(p);
        } 
        else {
            pair<int, int> p;
            p.first = val;
            p.second = min(val, st.back().second);
            st.push_back(p);
        }
    }

    void pop() { st.pop_back(); }

    int top() { return st.back().first; }

    int getMin() { return st.back().second; }
};

int main() {
    MinStack st;
    st.push(2);
    st.push(4);
    st.push(1);
    st.push(0);
    st.push(8);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.top() << endl;
    cout << st.getMin() << endl;
    return 0;
}