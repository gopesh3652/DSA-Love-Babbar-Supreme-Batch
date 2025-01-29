#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data) : data(data), left(NULL), right(NULL) {}
};

// it returns root node of created tree
Node* createTree() {
    int data;
    cout << "Enter data for node" << endl;
    cin >> data;

    if (data == -1) return NULL;

    // Step-1 create Node
    Node* root = new Node(data);

    // Step-2 create left subtree
    cout << "Left of Node: " << root->data << endl;
    root->left = createTree();

    // Step-3 create right subtree
    cout << "Right of Node: " << root->data << endl;
    root->right = createTree();

    return root;
}

int main() {
    Node* root = createTree();
    cout << "Root is: " << root->data << endl;
    return 0;
}