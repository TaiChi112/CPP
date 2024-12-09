#include <iostream>
using namespace std;

struct Node {
    string id;
    int score;
    Node *first;
};

int main() {
    Node *first = NULL;
    Node *p = new Node;
    Node *q = new Node;
    Node *r = new Node;

    p->id = "001";
    p->score = 93;
    p->first = q;

    q->id = "002";
    q->score = 68;
    q->first = r;

    r->id = "003";
    r->score = 75;
    r->first = NULL;

    // ลบ Node ที่ q
    delete q;
    return 0;
}
