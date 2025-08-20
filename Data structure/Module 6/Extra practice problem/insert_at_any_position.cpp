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

void insert_at_any_position(Node *&p, int idx, int val)
{
    Node *newnode = new Node(val);
    Node* temp = p ;
    for (int i = 0; i < idx - 1; i++)
    {
        temp=temp->next;
    }
    newnode->next = temp->next ;
    temp->next = newnode ;
}

void print_linked_list(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " " << endl;
        temp = temp->next;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    Node *head = new Node(a);
    Node *alfa = new Node(b);
    Node *beta = new Node(c);

    head->next = alfa;
    alfa->next = beta;

    insert_at_any_position(head, 3, 100);

    print_linked_list(head);

    return 0;
}