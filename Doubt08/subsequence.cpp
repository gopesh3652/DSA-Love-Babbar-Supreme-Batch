#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

void substring(string s) {
    int num_subs = pow(2, s.size());

    for (int n = 0; n < num_subs; n++) {

        int num = n;
        int i = 0;
        string out;

        while (num) {
            int b = num & 1;
            if (b)
                out.push_back(s[i]);
            ++i;
            num >>= 1;
        }
        cout << out << endl;;
    }
}

int main() {
    string s = "abc";
    substring(s);
    return 0;
}