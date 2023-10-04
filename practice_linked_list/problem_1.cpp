// Question: Take a singly linked list as input and print the size of the linked list.

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
    int count = 0;
    // cout << "Your Linked list: ";
    while (tmp != NULL)
    {
        // cout << tmp->val << " ";
        tmp = tmp->next;
        count++;
    }
    cout << endl
         << count;
}
int main()
{
    Node *head = NULL;
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