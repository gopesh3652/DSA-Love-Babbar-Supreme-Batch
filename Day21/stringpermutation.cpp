#include<iostream>
#include<cstring>
using namespace std;

void permutation(string& str, int index) {
    if (index >= str.length()) {
        cout << str << endl;
        return;
    }

    for (int j = index; j < str.length(); j++) {
        swap(str[index], str[j]);
        // recursion
        permutation(str, index + 1);
        // backtracking
        swap(str[index], str[j]);
    }
}

int main() {
    string str = "PQR";
    int index = 0;
    permutation(str, index);
    return 0;
}