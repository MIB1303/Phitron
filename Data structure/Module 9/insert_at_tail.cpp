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

void print_forward(Node *&head)
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

void  insert_at_tail(Node* &tail)
{
    Node* newnode = new Node(100);
    // if(head == NULL)
    // {
    //     head = newnode; jokhon linked list faka/empty thakbe ;
    //     taii = newnode; jokhon linked list faka/empty thakbe ;
    // }
    tail->next = newnode ;
    newnode->prev = tail ;
    tail =  newnode ;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = new Node(50);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    c->next = tail;
    tail->prev = c;
    insert_at_tail(tail);
    print_forward(head);
    print_backword(tail);
}