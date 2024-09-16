vector<int> help_classmate(vector<int> arr, int n) {

    stack<int> st;
    vector<int> answer(n);
    st.push(-1);

    for (int i = n - 1; i >= 0; i--) {
        int curr = arr[i];

        while (st.top() >= curr) {
            st.pop();
        }

        answer[i] = st.top();

        st.push(curr);
    }
    return answer;
}