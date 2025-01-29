#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data) : data(data), left(NULL), right(NULL) {}
};

Node *createTree()
{
    int data;
    cout << "Enter data:-" << endl;
    cin >> data;

    if (data == -1)
        return NULL;

    Node *root = new Node(data);

    cout << "Enter data to the left of " << root->data << " node :-" << endl;
    root->left = createTree();

    cout << "Enter data to the right of " << root->data << " node :-" << endl;
    root->right = createTree();

    return root;
}

void preOrder(Node *root)
{
    if (root == nullptr)
        return;

    // NLR
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);

    return;
}

void inOrder(Node *root)
{
    if (root == nullptr)
        return;

    // LNR
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);

    return;
}

void postOrder(Node *root)
{
    if (root == nullptr)
        return;

    // NLR
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";

    return;
}

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
    return;
}

void printLeftView(Node *root, int level, vector<int> &leftView)
{
    if (root == NULL)
        return;

    if (level == leftView.size())
    {
        // this is left view stre it

        leftView.push_back(root->data);
    }

    printLeftView(root->left, level + 1, leftView);
    printLeftView(root->right, level + 1, leftView);

    return;
}

void printRightView(Node *root, int level, vector<int> &rightView)
{
    if (root == NULL)
        return;

    if (level == rightView.size())
    {
        // this is left view stre it

        rightView.push_back(root->data);
    }

    printRightView(root->right, level + 1, rightView);
    printRightView(root->left, level + 1, rightView);

    return;
}

void printTopView(Node *root)
{
    map<int, int> topView;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();

        // hd --> horizontal distance
        Node *frontNode = temp.first;
        int hd = temp.second;

        if (topView.find(hd) == topView.end())
        {
            topView[hd] = frontNode->data;
        }

        if (frontNode->left != NULL)
        {
            q.push(make_pair(frontNode->left, hd - 1));
        }

        if (frontNode->right != NULL)
        {
            q.push(make_pair(frontNode->right, hd + 1));
        }
    }

    // Printing top view
    // cout << "Top View: " << endl;
    for (auto i : topView)
    {
        cout << i.second << " ";
    }
    // cout << endl;
    // cout << endl;
}

void printBottomView(Node *root)
{
    map<int, int> bottomView;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();

        Node *frontNode = temp.first;
        int hd = temp.second;

        bottomView[hd] = frontNode->data;

        if (frontNode->left != NULL)
            q.push(make_pair(frontNode->left, hd - 1));
        if (frontNode->right != NULL)
            q.push(make_pair(frontNode->right, hd + 1));
    }

    for (auto i : bottomView)
    {
        cout << i.second << " ";
    }
    return;
}

void printLeftBoundry(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        return;

    cout << root->data << " ";
    if (root->left != NULL)
        printLeftBoundry(root->left);
    else
        printLeftBoundry(root->right);
}

void printLeafBoundry(Node *root)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        cout << root->data << " ";

    printLeafBoundry(root->left);
    printLeafBoundry(root->right);
}

void printRightBoundry(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        return;

    // cout << root->data << " ";
    if (root->right != NULL)
        printRightBoundry(root->right);
    else
        printRightBoundry(root->left);
    cout << root->data << " ";
}

void printBoundry(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";

    printLeftBoundry(root->left);
    cout << endl;

    printLeafBoundry(root->left);
    printLeafBoundry(root->right);
    cout << endl;

    printRightBoundry(root->right);
}

// 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1

int main()
{
    Node *root = createTree();
    vector<int> leftView;
    vector<int> rightView;

    levelOrder(root);
    cout << endl;

    printLeftView(root, 0, leftView);
    cout << "Left View: " << endl;

    for (int i : leftView)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    printRightView(root, 0, rightView);
    cout << "Right View: " << endl;

    for (int i : rightView)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Top View: " << endl;
    printTopView(root);
    cout << endl;
    cout << endl;

    cout << "Bottom View: " << endl;
    printBottomView(root);
    cout << endl;
    cout << endl;

    cout << "Boundry View: " << endl;
    printBoundry(root);
    cout << endl;
    cout << endl;

    return 0;
}