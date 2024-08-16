#include <iostream>

using namespace std;

struct Student
{
    string name;
    Student *next;
};

int main()
{
    Student *head[]{new Student{"1", NULL}, new Student{"2", NULL}, new Student{"3", NULL}, new Student{"4", NULL}, new Student{"5", NULL}};

    for (int i = 0; i < 5; i++)
    {
        cout << head[i]->name << endl;
        head[i]->next = head[i + 1];
    }
    return 1;

    // Student *head = NULL;
    // Student *current = NULL;
    // Student *last = NULL;
    // Student *temp = NULL;

    // for (int i = 0; i < 5; i++)
    // {
    //     temp = new Student;
    //     cin >> temp->name;
    //     temp->next = NULL;
    //     if (head == NULL)
    //     {
    //         head = temp;
    //         last = temp;
    //     }
    //     else
    //     {
    //         last->next = temp;
    //         last = temp;
    //     }
    // }

    // current = head;

    // while (current != NULL)
    // {
    //     cout << current->name << " -> ";
    //     current = current->next;
    // }

    // cout << "null" << endl;
    return 0;
}