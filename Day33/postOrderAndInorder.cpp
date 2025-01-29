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

void createMapping(int* inorder, int& size, map<int, int>& valueToIndex) {
    for (int i = 0; i < size; i++) valueToIndex[inorder[i]] = i;
}

Node* constructTreeFromPostAndInOrderTraversal(int* inorder, int* postorder, int& size, int inorderStart, int inorderEnd, int& postorderIndex, map<int, int>& valueToIndex) {
    if (postorderIndex < 0 || inorderStart > inorderEnd) return NULL;

    int element = postorder[postorderIndex--];
    Node* root = new Node(element);

    int position = valueToIndex[element];

    root->right = constructTreeFromPostAndInOrderTraversal(inorder, postorder, size, position + 1, inorderEnd, postorderIndex, valueToIndex);
    root->left = constructTreeFromPostAndInOrderTraversal(inorder, postorder, size, inorderStart, position - 1, postorderIndex, valueToIndex);

    return root;
}

int main() { 
    int inorder[] = { 8, 14, 6, 2, 10, 4 };
    int postorder[] = { 8, 6, 14, 4, 10, 2 };
    int size = 6;
    int postorderIndex = size - 1;
    int inorderStart = 0;
    int inorderEnd = size - 1;
    map<int, int> valueToIndex;
    createMapping(inorder, size, valueToIndex);

    Node* root = constructTreeFromPostAndInOrderTraversal(inorder, postorder, size, inorderStart, inorderEnd, postorderIndex, valueToIndex);

    cout << "Printing the entire tree:" << endl;
    levelOrderTraversal(root);

    return 0;
}