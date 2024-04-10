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

int main()
{
    TreeNode *treenode = new TreeNode(112);// pointer variable treenode it's keeping the address of the object it's can create in struct and it's can create default node tree 
    Person person1;
    Person person2("John", "Doe", 25);
    person2.displayPersonOverloading();
    return 0;
}