#include <iostream>

using namespace std;
class Person
{
    string firstname;
    string lastname;
    int age;

public:
    Person()
    {
        cout << "Hi Class person" << endl;
    }
    Person(string firstname, string lastname, int age) : firstname(firstname), lastname(lastname), age(age) {}
    void displayPersonOverloading()
    {
        cout << firstname << " : " << lastname << " : " << age << endl;
    }
};
// Write function preoder tree data structure here
struct TreeNode
{
    int data;
    TreeNode *left; // object pointer left to keep variable address
    TreeNode *right;
    // constructor for the class it's can create in struct
    TreeNode(int data) : data(data), left(NULL), right(NULL) {}
    // next step for test this struct it's can create default node tree
};

void preorderTreeNode(TreeNode *root)
{
    if (root == NULL)
    {
        cout<<"NULL it's not data"<<endl;;
    }
    cout << root->data << " -> "; // root it's pointer variable
    preorderTreeNode(root->left);
    preorderTreeNode(root->right);
}

int main()
{
    TreeNode *rootnode = NULL;
    // TreeNode *rootnode = new TreeNode(112); // pointer variable rootnode it's keeping the address of the object it's can create in struct and it's can create default node tree
    // pointer rootnode it's can access pointer variable left with right
    // rootnode->left = new TreeNode(113); // Now! rootnode it's keeping addresss left and then left it's pointer variable it's keeping addresss new tree node
    // rootnode->right = new TreeNode(114);
    preorderTreeNode(rootnode);

    Person person1;
    Person person2("John", "Doe", 25);
    person2.displayPersonOverloading();
    return 0;
}