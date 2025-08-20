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
    tail = newnode;
}

void reverse_linked_list(Node *&head, Node *temp)
{
    if (temp->next == NULL)
    {
        head = temp;
        return;
    }
    reverse_linked_list(head, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    reverse_linked_list(head, head);

    tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    print_linked_list(head);
    cout << "Head: " << head->val << endl;
    cout << "Tail: " << tail->val << endl;
    return 0;
}
