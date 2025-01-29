int height(TreeNode*& root) {
    if (root == NULL) return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    int height = 1 + max(leftHeight, rightHeight);

    return height;
}
bool isBalanced(TreeNode* root) {
    if (root == NULL) return true;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int diff = abs(leftHeight - rightHeight);

    bool currNodeAns = (diff <= 1);

    bool leftSubTree = isBalanced(root->left);
    bool rightSubTree = isBalanced(root->right);

    if (currNodeAns && leftSubTree && rightSubTree) return 1;
    return 0;
}