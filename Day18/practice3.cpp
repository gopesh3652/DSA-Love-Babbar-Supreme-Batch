#include <iostream>
#include <vector>
using namespace std;

void digitAns(int num, vector<int> &ans)
{

    if (num == 0)
        return;

    int n = num % 10;
    num /= 10;

    digitAns(num, ans);

    ans.push_back(n);
    // cout << n << " ";
}

int main()
{
    int num = 4215;
    vector<int> ans;
    digitAns(num, ans);

    for (int n : ans)
        cout << n << " ";
}