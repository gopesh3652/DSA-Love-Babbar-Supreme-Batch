#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int solve(vector<vector<char>>& matrix, int i, int j, int row, int col, int& maxi) {
    // base case
    if (i >= row || j >= col) return 0;

    // explore all 3 directions
    int right = solve(matrix, i, j + 1, row, col, maxi);
    int diagonal = solve(matrix, i + 1, j + 1, row, col, maxi);
    int down = solve(matrix, i + 1, j, row, col, maxi);

    if (matrix[i][j] == '1') {
        // check if we can make square
        int ans = 1 + min(right, min(down, diagonal));
        maxi = max(maxi, ans);
        return ans;
    }
    else {
        // if on 0 than ans is also zero
        return 0;
    }
}

int maximalSquare(vector<vector<char>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    int i = 0;
    int j = 0;
    int maxi = 0;
    solve(matrix, i, j, row, col, maxi);
    return maxi;
}

int main() {
    vector<vector<char>>square = {
        {'1', '0', '1', '0', '0'},
        {'1', '0', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '0', '0', '1', '0'}
    };
    int ans = maximalSquare(square);
    cout << ans << endl;
    return 0;
}