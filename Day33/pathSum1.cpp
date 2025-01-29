bool findSum(TreeNode*& root, int sum, int targetSum) {
    if (root == NULL) return false;

    sum = sum + root->val;

    if (root->left == NULL && root->right == NULL) {
        if (sum == targetSum) return true;
        else return false;
    }

    bool leftAns = findSum(root->left, sum, targetSum);
    bool rightAns = findSum(root->right, sum, targetSum);

    return leftAns || rightAns;
}

bool hasPathSum(TreeNode* root, int targetSum) {
    int sum = 0;

    bool ans = findSum(root, sum, targetSum);

    return ans;
}