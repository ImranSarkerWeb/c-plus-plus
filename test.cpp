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
void create_linked_list(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    ;
    cout << "Your Linked list:";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    cout << "Enter your data one by one,enter -1 for exist" << endl;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        else
        {
            create_linked_list(head, v);
        }
    }
    print_linked_list(head);
    return 0;
}