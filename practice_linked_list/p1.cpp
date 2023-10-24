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
int size(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    cout << "Enter 1st link list: " << endl;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert(head1, tail1, v);
    }
    cout << "Enter 2nd link list: " << endl;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert(head2, tail2, v);
    }

    if (size(head1) == size(head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}