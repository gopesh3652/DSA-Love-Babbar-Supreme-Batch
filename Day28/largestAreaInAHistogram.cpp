#include<iostream>
#include<vector>
#include<stack>
#include<climits>
using namespace std;

vector<int> nextSmaller(vector<int> arr) {
    vector<int> ans(arr.size());
    stack<int>st;
    st.push(-1);

    for (int i = arr.size() - 1; i >= 0; i--) {
        int curr = arr[i];

        while (st.top() != -1 && arr[st.top()] >= curr) st.pop();

        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> prevSmaller(vector<int> arr) {
    vector<int> ans(arr.size());
    stack<int>st;
    st.push(-1);

    for (int i = 0; i < arr.size(); i++) {
        int curr = arr[i];

        while (st.top() != -1 && arr[st.top()] >= curr) st.pop();

        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int>& heights) {

    vector<int> leftAns = prevSmaller(heights);
    vector<int> rightAns = nextSmaller(heights);

    for (int i = 0; i < rightAns.size(); i++) {
        if (rightAns[i] == -1) rightAns[i] = heights.size();
    }

    vector<int> area(heights.size());

    for (int i = 0; i < heights.size(); i++) {
        int width = rightAns[i] - leftAns[i] - 1;
        int length = heights[i];
        int currArea = width * length;
        area[i] = currArea;
    }

    int maxi = INT_MIN;
    for (int i = 0; i < area.size(); i++) {
        maxi = max(maxi, area[i]);
    }
    return maxi;
}

int main() {
    vector<int>heights = { 2, 1, 5, 6, 2, 3 };
    int ans = largestRectangleArea(heights);
    cout << ans << endl;
    return 0;
}