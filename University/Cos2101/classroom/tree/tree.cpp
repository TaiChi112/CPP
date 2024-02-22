#include <iostream>

using namespace std;
struct Node
{
    Node *left, *right;
    string id;
    int score;
    Node *link;
};
void insert(Node *&root, string, int);
int findSum(Node *);
int FindN(Node *);
void inOrder(Node *);
void deleteTree(Node *&, string);
int main()
{
    Node *root = NULL;
    string id1;
    int score1;
    cout << "Enter the number of nodes  id : ";
    cin >> id1;
    while (id1 != "###")
    {
        cout << "Score : ";
        cin >> score1;
        insert(root, id1, score1);
        cout << "id : ";
        cin >> id1;
    }
    float average;
    int sum = 0;
    int n = 0;
    sum = findSum(root);
    n = FindN(root);
    average = (sum * 1.0) / n;
    cout << "\nThe Average Score is :" << average;
    cout << "Before delete : " << endl;
    inOrder(root);
    cout << "\nAfter delete : " << endl;
    cin >> id1;
    deleteTree(root, id1);
    cout << "After delete : " << endl;
    inOrder(root);
    return 0;
}
void insert(Node *&root, string id, int score)
{
    if (root == NULL)
    {
        root = new Node;
        root->id = id;
        root->score = score;
        root->link = NULL;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        if (score < root->score)
        {
            insert(root->left, id, score);
        }
        else
        {
            insert(root->right, id, score);
            root->link = NULL;
        }
    }
}
void inOrder(Node *root) //
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->id << " " << root->score << endl;
        inOrder(root->right);
    }
}
int findSum(Node *root) // find summation score
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return root->score + findSum(root->left) + findSum(root->right);
    }
}
int FindN(Node *root) // find amount node in tree
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + FindN(root->left) + FindN(root->right);
    }
}

void deleteTree(Node *&root, string id)
{
    if (root != NULL)
    {
        if (root->id == id)
        {
            Node *temp = root;
            root = root->link;
            delete temp;
        }
        else
        {
            deleteTree(root->left, id);
            deleteTree(root->right, id);
        }
    }
}