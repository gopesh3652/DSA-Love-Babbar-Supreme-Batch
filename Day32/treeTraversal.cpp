#include<iostream>
#include<queue>
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
    // cout << "Enter data for node" << endl;
    cin >> data;

    if (data == -1) return NULL;

    // Step-1 create Node
    Node* root = new Node(data);

    // Step-2 create left subtree
    // cout << "Left of Node: " << root->data << endl;
    root->left = createTree();

    // Step-3 create right subtree
    // cout << "Right of Node: " << root->data << endl;
    root->right = createTree();

    return root;
}

void preorderTraversal(Node*& root) {
    // base case
    if (root == NULL) return;

    // N L R

    // N
    cout << root->data << " ";

    // L
    preorderTraversal(root->left);

    // R
    preorderTraversal(root->right);
    return;
}

void inorderTraversal(Node*& root) {
    // base case
    if (root == NULL) return;

    // L N R

    // L
    inorderTraversal(root->left);

    // N
    cout << root->data << " ";

    // R
    inorderTraversal(root->right);
    return;
}

void postorderTraversal(Node*& root) {
    // base case
    if (root == NULL) return;

    // L R N

    // L
    postorderTraversal(root->left);

    // R
    postorderTraversal(root->right);

    // N
    cout << root->data << " ";
    return;
}

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

int main() {
    Node* root = createTree();
    // cout << "Root is: " << root->data << endl;

    // cout << "Preorder traversal is\t";
    // preorderTraversal(root);
    // cout << endl;

    // cout << "Inorder traversal is\t";
    // inorderTraversal(root);
    // cout << endl;

    // cout << "Postorder traversal is\t";
    // postorderTraversal(root);
    // cout << endl;

    // cout << "Level Order traversal is\t";
    levelOrderTraversal(root);
    cout << endl;
    return 0;
}

// 10 20 50 65 -1 -1 90 -1 -1 70 -1 -1 30 60 -1 -1 100 -1 -1