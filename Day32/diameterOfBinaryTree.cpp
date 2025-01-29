int maxDepth(TreeNode*& root) {
    if (root == NULL) return 0;

    int height = 1 + max(maxDepth(root->left), maxDepth(root->right));
    return height;
}

int diameterOfBinaryTree(TreeNode* root) {
    if (root == NULL) return 0;

    int option1 = diameterOfBinaryTree(root->left);
    int option2 = diameterOfBinaryTree(root->right);
    int option3 = maxDepth(root->left) + maxDepth(root->right);
    int diameter = max(option1, max(option2, option3));

    return diameter;
}