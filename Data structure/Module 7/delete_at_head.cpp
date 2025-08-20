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

void delate_at_head(Node *&hea)
{
    Node* delate_node = hea ;
    hea = hea->next;
    delete delate_node ;
    
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
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
        insert_at_tail(head,tail,val);
    }
    delate_at_head(head);
    print_linked_list(head);
    return 0;
}







