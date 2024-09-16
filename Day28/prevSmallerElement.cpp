vector<int> leftSmaller(int n, int arr[]) {
    stack<int> st;
    vector<int>ans(n);
    st.push(-1);

    for (int i = 0; i < n; i++) {
        int curr = arr[i];

        while (st.top() >= curr) st.pop();

        ans[i] = st.top();

        st.push(curr);
    }
    return ans;
}