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
void cheak_equal(Node *head1, Node *head2, int size1)
{
    int flag = 1;
    for (int i = 0; i < size1; i++)
    {
        if (head1->val != head2->val)
        {
            flag = 0;
            break;
        }
        head1 = head1->next;
        head2 = head2->next;
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
    Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head1, tail1, val);
    }
    while (cin >> val && val != -1)
    {
        insert_at_tail(head2, tail2, val);
    }
    int size1 = size_of_list(head1);
    int size2 = size_of_list(head2);
    if (size1 != size2)
    {
        cout << "No";
    }
    else
    {
        cheak_equal(head1, head2, size1);
    }
}
