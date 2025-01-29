#include <iostream>
#include <queue>
using namespace std;

// 50 30 20 25 40 60 70 80 55 -1

class Node
{
public:
  int data;
  Node *left;
  Node *right;
  Node(int data) : data(data), left(NULL), right(NULL) {}
};

Node *insertIntoBST(Node *root, int data)
{
  if (root == NULL)
  {
    root = new Node(data);
    return root;
  }

  if (data > root->data)
  {
    root->right = insertIntoBST(root->right, data);
  }
  else
  {
    root->left = insertIntoBST(root->left, data);
  }

  return root;
}

void createBST(Node *&root)
{
  cout << "Enter data: " << endl;
  int data;
  cin >> data;

  while (data != -1)
  {
    root = insertIntoBST(root, data);
    cout << "Enter data: " << endl;
    cin >> data;
  }
  return;
}

void levelOrderTraversal(Node *root)
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
      {
        q.push(NULL);
      }
    }

    else
    {
      cout << temp->data << " ";

      if (temp->left != NULL)
      {
        q.push(temp->left);
      }

      if (temp->right != NULL)
      {
        q.push(temp->right);
      }
    }
  }
}

void inorder(Node *root)
{
  if (root == NULL)
  {
    return;
  }

  // LNR
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

void preorder(Node *root)
{
  if (root == NULL)
  {
    return;
  }

  // NLR
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

void postorder(Node *root)
{
  if (root == NULL)
  {
    return;
  }

  // LRN
  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}

Node *minValue(Node *root)
{
  if (root == NULL)
  {
    cout << "NO MIN VALUE" << endl;
    return NULL;
  }

  Node *temp = root;

  while (temp->left != NULL)
  {
    temp = temp->left;
  }
  return temp;
}

Node *maxValue(Node *root)
{
  if (root == NULL)
  {
    cout << "NO MAX VALUE" << endl;
    return NULL;
  }

  Node *temp = root;
  while (temp->right != NULL)
  {
    temp = temp->right;
  }
  return temp;
}

bool searchInBST(Node *root, int &target)
{
  if (root == NULL)
  {
    return 0;
  }

  if (target == root->data)
  {
    return 1;
  }

  bool leftAns = false;
  bool rightAns = false;
  if (target > root->data)
  {
    leftAns = searchInBST(root->right, target);
  }
  else
  {
    rightAns = searchInBST(root->left, target);
  }

  return leftAns || rightAns;
}

Node *deleteFromBST(Node *root, int &target)
{
  // find the target
  // delete the target

  if (root == NULL)
    return NULL;

  if (root->data == target)
  {
    // 4 cases

    if (root->left == NULL && root->right == NULL)
    {
      // CASE: 1
      // leaf node
      delete root;
      return NULL;
    }
    else if (root->left != NULL && root->right == NULL)
    {
      // CASE: 2
      // left is not null
      // right is null
      Node *childSubtree = root->left;
      delete root;
      return childSubtree;
    }
    else if (root->left == NULL && root->right != NULL)
    {
      // CASE: 3
      // left is null
      // right is not null
      Node *childSubTree = root->right;
      delete root;
      return childSubTree;
    }
    else
    {
      // CASE: 4
      // TYPE: A
      // find max in left subtree
      Node *maxi = maxValue(root->left);
      // replace it with root
      root->data = maxi->data;
      // delete actual max node from left subtree
      root->left = deleteFromBST(root->left, maxi->data);
      return root;

      // OR

      // TYPE: B
      // // find min in right subtree
      // Node *mini = minValue(root->right);
      // // replace it with root
      // root->data = mini->data;
      // // delete actual max node from left subtree
      // root->right = deleteFromBST(root->right, mini->data);
      // return root;
    }
  }
  else if (root->data < target)
  {
    // target is bigger than root data
    // go to right
    root->right = deleteFromBST(root->right, target);
  }
  else
  {
    root->left = deleteFromBST(root->left, target);
  }
  return root;
}

int main()
{
  Node *root = NULL;
  createBST(root);

  cout << endl;
  cout << "LEVEL ORDER:" << endl;
  levelOrderTraversal(root);
  cout << endl;

  cout << endl;
  cout << "INORDER:" << endl;
  inorder(root);
  cout << endl;

  cout << endl;
  cout << "PREORDER:" << endl;
  preorder(root);
  cout << endl;

  cout << endl;
  cout << "POSTORDER:" << endl;
  postorder(root);
  cout << endl;

  cout << endl;
  Node *minNode = minValue(root);
  if (minNode != NULL)
  {
    cout << "MIN VALUE: " << endl
         << minNode->data << endl;
  }
  cout << endl;

  cout << endl;
  Node *maxNode = maxValue(root);
  if (maxNode != NULL)
  {
    cout << "MAX VALUE: " << endl
         << maxNode->data << endl;
  }
  cout << endl;

  // cout << endl;
  // int target = 25;
  // bool isFound = searchInBST(root, target);
  // if (isFound) {
  //   cout << "Target found." << endl;
  //   }
  // else {
  //   cout << "Target not found." << endl;
  //   }
  // cout << endl;

  cout << endl;
  int target;
  cout << "Enter target: " << endl;
  cin >> target;
  while (target != -1)
  {
    deleteFromBST(root, target);
    levelOrderTraversal(root);
    cout << "Enter target: " << endl;
    cin >> target;
  }

  return 0;
}