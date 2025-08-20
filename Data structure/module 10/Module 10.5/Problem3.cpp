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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
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

void list_pelindrom(Node *head, Node *tail)
{
    int flag = 1;
    for (Node *i = head, *j = tail; i != j && j != i->prev; i = i->next, j = j->prev)
    {
        if (head->val != tail->val)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
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
    list_pelindrom(head, tail);
    return 0;
}