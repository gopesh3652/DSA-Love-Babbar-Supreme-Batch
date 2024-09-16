#include<iostream>
using namespace std;

int solve(string& word1, string& word2, int i, int j) {
    // base case
    if (i >= word1.length()) {
        // word1 end ho gya
        return word2.length() - j;
    }
    if (j >= word2.length()) {
        // word2 end ho gya
        return word1.length() - i;
    }

    int ans = 0;
    if (word1[i] == word2[j]) {
        // match
        ans = 0 + solve(word1, word2, i + 1, j + 1);
    }
    else {
        // not match
        // perform operation

        // insert
        int option1 = 1 + solve(word1, word2, i, j + 1);

        // remove  
        int option2 = 1 + solve(word1, word2, i + 1, j);

        // replace
        int option3 = 1 + solve(word1, word2, i + 1, j + 1);

        ans = min(option1, min(option2, option3));
    }
    return ans;
}

int main() {
    string word1 = "horse", word2 = "ros";
    int i = 0, j = 0;
    int ans = solve(word1, word2, i, j);
    cout << "Answer is:- " << ans << endl;
    return 0;
}