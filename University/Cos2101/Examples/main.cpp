#include <iostream>

using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data) : data(data), left(NULL), right(NULL) {}
};
struct LinkedListNode
{
    int data;
    LinkedListNode *next;
    LinkedListNode(int data) : data(data), next(NULL) {}
};
LinkedListNode *insertLinkedListNode(LinkedListNode *node, int data)
{
    LinkedListNode *newNode = new LinkedListNode(data);
    if (node == NULL)
    {
        return newNode;
    }

    LinkedListNode *currentNode = node;
    while (currentNode->next != NULL)
    {
        currentNode = currentNode->next;
    }
    currentNode->next = newNode;
    return node;
}
void displayLinkedList(LinkedListNode *node)
{

    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

TreeNode *insertTreeNode(TreeNode *root, int data)
{
    if (root == NULL)
    {
        return new TreeNode(data);
    }
    if (data < root->data)
    {
        root->left = insertTreeNode(root->left, data);
    }
    else
    {
        root->right = insertTreeNode(root->right, data);
    }
    return root;
}
void inorderTree(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTree(root->left);
    cout << root->data << " ";
    inorderTree(root->right);
}
void postorderTree(TreeNode *root)
{

    if (root == NULL)
    {
        return;
    }
    postorderTree(root->left);
    postorderTree(root->right);
    cout << root->data << " ";
}
void preorderTree(TreeNode *root)
{

    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorderTree(root->left);
    preorderTree(root->right);
}
void displayTree(TreeNode *root)
{

    if (root != NULL)
    {
        cout << root->data << " ";
        displayTree(root->left);
        displayTree(root->right);
    }
}

int main()
{
    TreeNode *Tree = new TreeNode(10);
    Tree = insertTreeNode(Tree, 112);
    Tree = insertTreeNode(Tree, 101);
    Tree = insertTreeNode(Tree, 99);
    Tree = insertTreeNode(Tree, 87);
    displayTree(Tree);
    cout << endl;
    preorderTree(Tree);
    cout << endl;
    inorderTree(Tree);
    cout << endl;
    postorderTree(Tree);
    cout << endl;
    LinkedListNode *LinkedList = new LinkedListNode(10);
    LinkedList = insertLinkedListNode(LinkedList, 5);
    LinkedList = insertLinkedListNode(LinkedList, 5);
    LinkedList = insertLinkedListNode(LinkedList, 5);
    LinkedList = insertLinkedListNode(LinkedList, 5);
    displayLinkedList(LinkedList);
    return 0;
}