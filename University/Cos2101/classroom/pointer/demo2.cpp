#include <iostream>

using namespace std;

struct node
{
    int coef;   // coefficient
    int power;  // exponential
    node *link; // link next node
};

void Input(node *&); // reference use memory in main
void Output(node *); // keeping address is getting

int main()
{
    node *y;  // declare pointer
    y = NULL; // link null
    Input(y); // pointer in first node
    Output(y); // display node
        return 0;
}
void Input(node *&y) // use memory main
{
    int c, p;
    node *before, // pointer before insert
        *after,   // pointer after insert
        *item;    // new data

    cout << "COEF : " << endl;
    cin >> c;
    while (c != -999)
    {
        cout << "Power : " << endl;
        cin >> p;
        item = new node;
        item->coef = c;
        item->power = p;
        item->link = NULL;
        if (y == NULL)
        {
            y = item;
        }
        else
        {
            before = NULL;
            after = y;
            while (after != NULL && after->power > item->power)
            {
                before = after;
                after = after->link;
            }
            if (before == NULL)
            {
                item->link = y;
                y = item;
            }
            else
            {
                item->link = after;
                before->link = item;
            }
            cout << "COEF : " << endl;
            cin >> c;
        }
    }
}
void Output(node *y)
{
    while (y != NULL)
    {
        cout << y->coef << "x" << y->power << endl;
        y = y->link;
    }
    if (y->coef > 0)
    {
        cout << y->coef << "x" << y->power << endl;
    }
}