#include<iostream>
#include<queue>  
#include <map>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data) : data(data), left(NULL), right(NULL) {}
};

void levelOrderTraversal(Node*& root) {
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) q.push(NULL);
        }
        else {
            // valid node
            cout << temp->data << " ";

            if (temp->left != NULL)
                q.push(temp->left);

            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
}

int searchInorder(int* inorder, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (inorder[i] == target) return i;
    }
    return -1;
}

void createMapping(int* inorder, int& size, map<int, int>& valueToIndex) {
    for (int i = 0; i < size; i++) {
        valueToIndex[inorder[i]] = i;
        /*
        int element = inorder[i];
        int index = i
        */
    }
}

Node* constructTreeFromPreAndInOrderTraversal(map<int, int>& valueToIndex, int* preorder, int* inorder, int& preorderIndex, int inorderStart, int inorderEnd, int size) {
    if (preorderIndex >= size || inorderStart > inorderEnd) return NULL;

    int element = preorder[preorderIndex++];

    Node* root = new Node(element);
    // int position = searchInorder(inorder, size, element);
    int position = valueToIndex[element];

    root->left = constructTreeFromPreAndInOrderTraversal(valueToIndex, preorder, inorder, preorderIndex, inorderStart, position - 1, size);
    root->right = constructTreeFromPreAndInOrderTraversal(valueToIndex, preorder, inorder, preorderIndex, position + 1, inorderEnd, size);

    return root;
}

int main() {
    int inorder[] = { 10, 8, 6, 2, 4, 12 };
    int preorder[] = { 2, 8, 10, 6, 4, 12 };
    int size = 6;
    int preorderIndex = 0;
    int inorderStart = 0;
    int inorderEnd = size - 1;
    map<int, int> valueToIndex;
    createMapping(inorder, size, valueToIndex);

    Node* root = constructTreeFromPreAndInOrderTraversal(valueToIndex, preorder, inorder, preorderIndex, inorderStart, inorderEnd, size);

    cout << "Printing the entire tree:" << endl;
    levelOrderTraversal(root);

    return 0;
}