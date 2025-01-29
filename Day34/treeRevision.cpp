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

Node* createTree() {
    int data;
    cout << "Enter data:-" << endl;
    cin >> data;

    if (data == -1) return NULL;

    Node* root = new Node(data); 

    cout << "Enter data to the left of " << root->data << " node :-" << endl;
    root->left = createTree();

    cout << "Enter data to the right of " << root->data << " node :-" << endl;
    root->right = createTree();

    return root;
}

void preOrder(Node* root) {
    if (root == nullptr) return;

    // NLR
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);

    return;
}

void inOrder(Node* root) {
    if (root == nullptr) return;

    // LNR
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);

    return;
}

void postOrder(Node* root) {
    if (root == nullptr) return;

    // NLR
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";

    return;
}

void levelOrder(Node* root) {
    queue<Node*> q;
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
            cout << temp->data << " ";

            if (temp->left != NULL) q.push(temp->left);
            if (temp->right != NULL) q.push(temp->right);
        }
    }
    return;
}

int main() {

    return 0;
}