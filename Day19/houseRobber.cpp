// #include <iostream>
// #include<vector>
// #include<climits>
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums, int size, int index) {
    // base case
    if(index >= size) {
        return 0;
    }

    // chori karlo
    int option1 = nums[index] + solve(nums, size, index+2);
    // chori mt karo
    int option2 = solve(nums, size, index + 1);

    return max(option1, option2);
}

int rob(vector<int>& nums) {
    int size = nums.size();
    int index = 0;
    int ans = solve(nums, size, index);
    return ans;
}

int main()
{
    vector<int> nums = {2, 7, 9, 3, 1};
    int ans = rob(nums);
    cout << "Maximux robbed amount:- " << ans << endl;
    return 0;
}