#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s) {
    stack<char>st;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch == '{' || ch == '[' || ch == '(') {
            st.push(ch);
        }
        else {
            if (!st.empty()) {
                if (ch == ')' && st.top() == '(') st.pop();
                else if (ch == '}' && st.top() == '{') st.pop();
                else if (ch == ']' && st.top() == '[') st.pop();
                else return 0;
            }
            else return 0;
        }
    }
    if (st.size() == 0) return 1;
    else return 0;
}

int main() {
    string s = "([{[]{}}]])";
    if (isValid(s)) cout << "Matched" << endl;
    else cout << "Not Matched" << endl;
    return 0;
}