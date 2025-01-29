int solve(Node* root, int& k, int node) {
    if (root == NULL) return -1;

    if (root->data == node) {
        return root->data;
    }

    int left = solve(root->left, k, node);
    int right = solve(root->right, k, node);

    if (left != -1 || right != -1) {
        k--;

        if (k == 0) return root->data;

        return (left != -1) ? left : right;
    }
    return -1;
}

int kthAncestor(Node* root, int k, int node) {
    int ans = solve(root, k, node);

    return (ans == node) ? -1 : ans;
}