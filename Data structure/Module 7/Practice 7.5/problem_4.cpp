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

void insert_at_index(Node *&head, int index, int val)
{
    Node *newNode = new Node(val);
    if (index == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL && cnt < index - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp == NULL)
    {
        cout << "Invalid" << endl;
        delete newNode;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void print_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int size_of_list(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int index, value;
        cin >> index >> value;
        if (index < 0 || index > size_of_list(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at_index(head, index, value);
            print_list(head);
        }
    }
    return 0;
}
