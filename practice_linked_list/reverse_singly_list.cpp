#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}
void print_recursively(Node *n)
{
    if (n == NULL)
        return;
    cout << n->val << " ";
    print_recursively(n->next);
}
void print_reverse(Node *n)
{
    if (n == NULL)
        return;

    print_reverse(n->next);
    cout << n->val << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert(head, tail, val);
    }

    print_recursively(head);
    cout << endl;
    print_reverse(head);
    return 0;
}