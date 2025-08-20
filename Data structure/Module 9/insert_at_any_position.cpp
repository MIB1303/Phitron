#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_any_position(Node *&hea, int idx, int val)
{
    Node *newnode = new Node(val);
    Node *temp = hea;
    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;

    temp->next = newnode;
    newnode->prev = temp;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backword(Node *&tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
 {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->prev = head ;
    
    a->next = b;
    b->prev = a;
    
    b->next = c;
    c->prev = b;

    insert_at_any_position(head, 2, 100);

    print_linked_list(head);
    print_backword(c);
    return 0;
}