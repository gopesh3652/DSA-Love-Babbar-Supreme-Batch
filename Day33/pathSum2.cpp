void findAns(TreeNode*& root, int targetSum, int sum, vector<vector<int>>& ans, vector<int> tempAns) {
    if (root == NULL) return;

    sum += root->val;
    tempAns.push_back(root->val);

    if (root->left == NULL && root->right == NULL) {
        if (sum == targetSum) {
            ans.push_back(tempAns);
            return;
        }
        else return;
    }

    findAns(root->left, targetSum, sum, ans, tempAns);
    findAns(root->right, targetSum, sum, ans, tempAns);
    return;
}

vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>>ans;
    vector<int>tempAns;
    int sum = 0;

    findAns(root, targetSum, sum, ans, tempAns);

    return ans;
}