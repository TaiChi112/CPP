#include <iostream>

using namespace std;
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data) : data(data), left(NULL), right(NULL) {}
};

TreeNode *createNode(int data)
{
    return new TreeNode(data);
}
TreeNode *insertNode(TreeNode *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }
    if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}
void inOrderTraversal(TreeNode *root)
{
    if (root != NULL)
    {
        inOrderTraversal(root->left);
        cout << root->data;
        inOrderTraversal(root->right);
    }
}
void preOrderTraversal(TreeNode *root)
{
    if (root != NULL)
    {
        cout << root->data;
        inOrderTraversal(root->left);
        inOrderTraversal(root->right);
    }
}
void postOrderTraversal(TreeNode *root)
{
    if (root != NULL)
    {
        inOrderTraversal(root->left);
        inOrderTraversal(root->right);
        cout << root->data;
    }
}

int main()
{
    TreeNode *root = NULL;
    root = insertNode(root, 5);
    root = insertNode(root, 3);
    root = insertNode(root, 7);

    inOrderTraversal(root);
    cout << endl;
    preOrderTraversal(root);
    cout << endl;
    postOrderTraversal(root);

    return 0;
}