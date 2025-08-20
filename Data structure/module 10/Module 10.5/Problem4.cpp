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
        next = NULL;
        prev = NULL;
    }
};
int size(Node *head)
{
    int cnt = 0;
    while (head)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
void insert_at_index(Node *&head, Node *&tail, int index, int val)
{
    Node *newNode = new Node(val);
    if (index == 0)
    {
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    else if (index == size(head))
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < index - 1; i++)
            temp = temp->next;
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
}
void print_forward(Node *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void print_backward(Node *tail)
{
    while (tail)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}
int main()
{
    int q;
    cin >> q;
    Node *head = NULL;
    Node *tail = NULL;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x < 0 || x > size(head))
        {
            cout << "Invalid" << endl;
            continue;
        }
        insert_at_index(head, tail, x, v);
        print_forward(head);
        print_backward(tail);
    }
}
