// #include<iostream>
// #include<cstring>
// #include<queue>
#include<bits/stdc++.h>
using namespace std;

string nonRepeating(string str) {
    string ans = "";
    queue<char> q;
    int freq[26] = { 0 };

    for (int i = 0; i < str.length(); i++) {
        // take a char
        char ch = str[i];
        // update its freq
        freq[ch - 'a']++;
        // push to queue
        q.push(ch);

        // find ans
        while (!q.empty()) {
            char frontChar = q.front();
            // check freq

            if (freq[frontChar - 'a'] > 1) {
                // it means it is not the answer
                q.pop();
            }
            else {
                // ye answer h
                // cout << frontChar << " -> ";
                ans.push_back(frontChar);
                ans.push_back('\t');
                break;
            }
        }
        if (q.empty()) {
            // cout << "#" << " -> ";
            ans.push_back('#');
            ans.push_back('\t');
        }
    }
    // cout << endl;
    return ans;
}

int main() {
    string str = "ababc";

    string ans = nonRepeating(str);

    cout << ans << endl;
    return 0;
}