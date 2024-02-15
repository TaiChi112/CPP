#include <iostream>

using namespace std;

struct Node
{
    string task;
    int cpu;
    Node *link;
};
struct Output
{
    string task;
    int cpu;
    int waiting;
    int turnAround;
};
void Enqueue(Node *&front, Node *&rear)
{
    Node *p;
    p = new Node;
    cout << "Task name : ";
    cin >> p->task;
    while (p->task != "###")
    {
        cout << "CPU time : ";
        cin >> p->cpu;
        p->link = NULL;
        if (front == NULL)
        {
            front = p;
            rear = p;
        }
        else
        {
            rear->link = p;
            rear = p;
        }
    }
}
void Dequeue(Node *&front, Node *&rear, string &name, int &t)
{
    Node *p;
    if (front == NULL)
    {
        cout << "Link queue underflow " << endl;
    }
    else
    {
        name = front->task;
        t = front->cpu;
        p = front;
        delete (p);
    }
}

void Process(Node *&front, Node *&rear, Output process[], int &n)
{
    string task1;
    int time;
    int waitingT = 0;
    int turnAroundT = 0;

    while (front != NULL)
    {
        Dequeue(front, rear, task1, time);
        process[n].task = task1;
        process[n].cpu = time;
        waitingT = turnAroundT;
        turnAroundT = waitingT + time;
        process->waiting = waitingT;
        process->turnAround = turnAroundT;
        ++n;
    }
}
int main()
{
    Output item[10];
    int n;
    Node *front, *rear;
    front = NULL;
    rear = NULL;
    Enqueue(front, rear);
    Process(front, rear, item, n);
    for (int i = 0; i < n; i++)
    {
        cout << item[i].task;
        cout << item[i].cpu;
        cout << item[i].waiting;
        cout << item[i].turnAround;
    }

    return 0;
}