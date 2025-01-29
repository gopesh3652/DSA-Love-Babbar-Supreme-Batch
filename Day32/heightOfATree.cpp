#include<iostream>
using namespace std;

int maxDepth(TreeNode*& root) {
    if (root == null) return 0;

    int height = 1 + max(maxDepth(root->left), maxDepth(root->right));
    return height;
}

int main() {

    return 0;
}