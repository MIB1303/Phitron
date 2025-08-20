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

void insert_at_tail(Node *&hea, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (hea == NULL)
    {
        hea = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
int maximum_value(Node *head)
{
    Node *temp = head;
    int max_val = 0;
    while (temp->next != 0)
    {
        temp = temp->next;
        if (temp->val > max_val)
        {
            max_val = temp->val;
        }
    }
    return max_val;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int max_val = maximum_value(head);
    cout << "Maximum value of the linked list: " << max_val << endl;
    return 0;
}