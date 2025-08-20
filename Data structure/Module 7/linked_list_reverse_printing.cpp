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
void print_reverse_linked_list(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }

    print_reverse_linked_list(temp->next);
    cout << temp->val << " " << endl;
    
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
    print_reverse_linked_list(head);
    return 0;
}